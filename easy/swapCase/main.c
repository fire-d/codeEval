/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  while (fgets(line, 1024, file)) {
    // Do something with the line
    int i;
    for(i=0;i<strlen(line);i++){
      if((line[i]>=97)&&(line[i]<=122)){
        printf("%c",line[i]-32);
        continue;
      }
      if((line[i]>=65)&&(line[i]<=90)){
        printf("%c",line[i]+32);
        continue;
      }
    }
  }
  return 0;
}
