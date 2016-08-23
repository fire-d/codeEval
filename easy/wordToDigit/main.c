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
      if(i==0){
        switch(line[i]){
        case 'z':
          printf("0");
          break;
        case 'o':
          printf("1");
          break;
        case 't':
          if(line[i+1]=='w'){
            printf("2");
          }else{
            printf("3");
          }
          break;
        case 'f':
          if(line[i+1]=='o'){
            printf("4");
          }else{
            printf("5");
          }
          break;
        case 's':
          if(line[i+1]=='i'){
            printf("6");
          }else{
            printf("7");
          }
          break;
        case 'e':
          printf("8");
          break;
        case 'n':
          printf("9");
          break;
        }
      }
      if(line[i]==';'){
        switch(line[i+1]){
        case 'z':
          printf("0");
          break;
        case 'o':
          printf("1");
          break;
        case 't':
          if(line[i+2]=='w'){
            printf("2");
          }else{
            printf("3");
          }
          break;
        case 'f':
          if(line[i+2]=='o'){
            printf("4");
          }else{
            printf("5");
          }
          break;
        case 's':
          if(line[i+2]=='i'){
            printf("6");
          }else{
            printf("7");
          }
          break;
        case 'e':
          printf("8");
          break;
        case 'n':
          printf("9");
          break;
        }
      }
    }
    printf("\n");
  }
  return 0;
}
