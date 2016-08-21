#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]){
  FILE *file=fopen(argv[1],"r");
  char line[1024];
  int i=0;
  int count;
  short base=0;
  while(fgets(line,1024,file)){
    count=0;
    for(i=0;i<1024;i++){
      if(line[i]=='\['){
        i++;
        break;
      }
    }
    while(line[i]!=']'){
      if(line[i]=='{'){
        i++;
        while(line[i]!='}'){
          if(line[i]==','){
            for(i=i-1;line[i]!=' ';i--){
              switch(base){
              case 0:
                count+=(line[i]-'0');
                break;
              case 1:
                count+=(line[i]-'0')*10;
                break;
              case 2:
                count+=(line[i]-'0')*100;
                break;
              }
              base++;
            }
            i=i+base+1;
            base=0;
            i++;
          }
          i++;
        }
      }
      i++;
    }
    printf("%d\n",count);
  }
  return 0;
}
