/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  while (fgets(line, 1024, file)) {
    // Do something with the line
    int i=strlen(line)-3;
    char x=line[i+1];
    //printf("%d\n",i);
    while(i>-1){
      i--;
      if(x==line[i]){
        break;
      }
    }
    printf("%d\n",i);
  }
  return 0;
}
