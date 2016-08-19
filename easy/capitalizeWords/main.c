/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  int i;
  short flag;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    flag=1;
    for(i=0;i<strlen(line);i++){
      if((flag)){
        if((line[i]>=97)&&(line[i]<=122)){
          printf("%c",line[i]-32);
          flag=0;
        }else{
          printf("%c",line[i]);
          flag=0;
        }
      }else{
        if(line[i]==' '){
          flag=1;
        }
        printf("%c",line[i]);
      }
      
    }
  }
  return 0;
}
