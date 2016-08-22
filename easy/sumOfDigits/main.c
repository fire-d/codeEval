/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  short i;
  int sum=0;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    for(i=0;i<strlen(line);i++){
      if(line[i]!='\n'){
        sum+=line[i]-'0';
      }
    }
    printf("%d\n",sum);
    sum=0;
  }
  return 0;
}
