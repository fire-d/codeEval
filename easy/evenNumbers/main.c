/* Sample code to read in test cases:*/
#include <stdio.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  while (fgets(line, 1024, file)) {
    // Do something with the line
    printf("%d\n",((atoi(line))%2)^1);
  }
  return 0;
}
