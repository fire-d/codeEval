/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int getHexSum(char *str, int stop){
  int j;
  short nibblePosition=0;
  int sum=0;
  for(j=stop;j>-1;j--){
    if(str[j]!=' '){
      if((str[j]>='a')&&(str[j]<='f')){
        switch(nibblePosition){
        case 0:sum+=(str[j]-87);
        break;
        case 1:sum+=(str[j]-87)*16;
        break;
        case 2:sum+=(str[j]-87)*256;
        break;
        }
      }else{
        switch(nibblePosition){
        case 0:
          sum+=(str[j]-'0');
          break;
        case 1:
          sum+=(str[j]-'0')*16;
          break;
        case 2:
          sum+=(str[j]-'0')*256;
          break;
        }
      }
      nibblePosition++;
    }else{
      nibblePosition=0;
    }
  }
  return sum;
}
int getBinSum(char *str, int begin){
  int j;
  short bitPosition=0;
  int sum=0;
  for(j=strlen(str)-2;j>begin;j--){
    if(str[j]!=' '){
      if(str[j]=='1'){
        sum+=(1<<bitPosition);
      }
      bitPosition++;
    }else{
      bitPosition=0;
    }
  }
  return sum;
}
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  int i;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    for(i=0;i<strlen(line);i++){
      if(line[i]=='|'){
        break;
      }
    }
    if(getHexSum(line,i-2)<=getBinSum(line,i+1)){
      printf("True\n");
    }else{
      printf("False\n");
    }
  }
  return 0;
}
