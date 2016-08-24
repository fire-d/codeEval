/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  short i,len,bugs=0;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    for(i=0;i<strlen(line);i++){
      if(line[i]=='|'){
        len=i-1;
        break;
      }
    }
    for(i=i-2;i>-1;i--){
      if(line[i]!=line[i+len+3]){
        bugs++;
      }
    }
    if(bugs==0){
      printf("Done\n");
    }else if(bugs<=2){
      printf("Low\n");
    }else if(bugs<=4){
      printf("Medium\n");
    }else if(bugs<=6){
      printf("High\n");
    }else{
      printf("Critical\n");
    }
    bugs=0;
  }
  return 0;
}
