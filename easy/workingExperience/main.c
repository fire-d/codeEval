/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int indexOf(char *str,char x,int start){
  int i;
  for(i=start;i<strlen(str);i++){
    if(str[i]==x){
      return i;
    }
  }
  return -1;
}
short getMonth(char *str,int begIndex){
  short i;
  if (str[begIndex]=='J'){
    if(str[begIndex+1]=='a'){
      return 0;
    }else if(str[begIndex+2]=='n'){
      return 5;
    }else{
      return 6;
    }
  }else if(str[begIndex]=='M'){
    if(str[begIndex+2]=='r'){
      return 2;
    }else{
      return 4;
    }
  }else if(str[begIndex]=='A'){
    if(str[begIndex+1]=='p'){
      return 3;
    }else{
      return 7;
    }
  }else if(str[begIndex]=='F'){
    return 1;
  }else if(str[begIndex]=='S'){
    return 8;
  }
  else if(str[begIndex]=='O'){
    return 9;
  }else if(str[begIndex]=='N'){
    return 10;
  }else{
    return 11;
  }
  return -1;
}
short getYear(char *str,int begIndex){
  if(str[begIndex+4]=='1'){
    return (str[begIndex+7]-'0');
  }else if(str[begIndex+6]=='0'){
    return ((str[begIndex+7]-'0')+10);
  }else if(str[begIndex+6]=='1'){
    return ((str[begIndex+7]-'0')+20);
  }else{
    return 30;
  }
  return -1;
}
void getNYears(unsigned long *months,char *str,int begIndex){
  short startMonth=getMonth(str,begIndex);
  short startYear=getYear(str,begIndex);
  short endMonth=getMonth(str,begIndex+9);
  short endYear=getYear(str,begIndex+9);
  short i;
  if(startYear==endYear){
    for(i=startMonth;i<=endMonth;i++){
      months[i]|=1<<startYear;
    }
  }else{
    short j;
    for(j=startYear;j<=endYear;j++){
      if(j==startYear){
        for(i=startMonth;i<12;i++){
          months[i]|=1<<j;
        }
      }else if(j==endYear){
        for(i=0;i<=endMonth;i++){
          months[i]|=1<<j;
        }
      }else{
        for(i=0;i<12;i++){
          months[i]|=1<<j;
        }
      }
    }
  }
  //return 0;
}
int countOnes(unsigned long i){
  {
  unsigned int count = 0;
  while(i)
  {
    count += i & 1;
    i >>= 1;
  }
  return count;
}
}
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  unsigned long months[12];
  while (fgets(line, 1024, file)) {
    // Do something with the line
    int j=0;
    for(j=0;j<12;j++){
      months[j]&=0x00000000;
    }
    j=0;
    int x= indexOf(line,';',j);
    do{
      getNYears(months,line,j);
      if(x!=-1){
        j=x+2;
      }else{
        break;
      }
      if(indexOf(line,';',j)!=-1){
        x+=19;
      }else{
        getNYears(months,line,j);
        break;
      }     
    }while(1);
    x=0;
    for(j=0;j<12;j++){
      x+=countOnes(months[j]);
      months[j]&=0x00000000;
    }
    int nYears=0;
    while(x>=12){
      nYears+=1;
      x-=12;
    }
    printf("%d\n",nYears);
    nYears=0;
  }
  return 0;
}
