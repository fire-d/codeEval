/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  int i=0;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    for(i=0;i<strlen(line);i++){
      if((line[i]>64)&&(line[i]<91)){
        printf("%c",line[i]+32);
      }else{
        printf("%c",line[i]);
      }
    }
  }
  return 0;
}
