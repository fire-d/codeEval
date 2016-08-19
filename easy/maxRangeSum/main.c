/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
short getN(char *str,short start){
  if(start==1){
    return ((str[1]-'0')+((str[0]-'0')*10));
  }else{
    return (str[0]-'0');
  }
}
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  short i,lSize,semicolon;
  short nextValue=0;
  short base=0;
  short cli=0;
  short sum=-10000;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    for(i=0;i<strlen(line);i++){
      if(line[i]==';'){
        semicolon=i;
      }
    }
    lSize=getN(line,semicolon-1);
    short cl[lSize];
    for(i=0;i<lSize;i++){
      cl[i]=0;
    }
    for(i=strlen(line)-2;i>semicolon;i--){
      if(line[i]=='-'){
        nextValue=nextValue*(-1);
      }else if(line[i]!=' '){
        switch(base){
        case 0: nextValue+=(line[i]-'0');
                break;
        case 1: nextValue+=(line[i]-'0')*10;
                break;
        }
        base++;
      }else{
        cl[cli%lSize]=nextValue;
        cli++;
        if(cli>=lSize){
          base=0;
          for(nextValue=0;nextValue<lSize;nextValue++){
            base+=cl[nextValue];
          }
          if(base>sum){
            sum=base;
          }
        }
        nextValue=0;
        base=0;
      }
    }
    cl[cli%lSize]=nextValue;
    cli++;
    if(cli>=lSize){
      base=0;
      for(nextValue=0;nextValue<lSize;nextValue++){
        base+=cl[nextValue];
      }
      if(base>sum){
        sum=base;
      }
    }
    nextValue=0;
    base=0;
    cli=0;
    if(sum>0){
      printf("%d\n",sum);
    }else{
      printf("0\n");
    }
    sum=-10000;
  }
  return 0;
}
