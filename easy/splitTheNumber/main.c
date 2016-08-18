/* Sample code to read in test cases:*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  while (fgets(line, 1024, file)) {
    // Do something with the line
    short i;
    int space,op;
    for(i=3;i<12;i++){
      if(line[i]==' '){
        space=i;
        break;
      }
    }
    for(i=space+1;i<=(space<<1)+1;i++){
      if(line[i]=='+'){
        op=i;
        i=0;
        break;
      }else if(line[i]=='-'){
        op=i;
        i=1;
        break;
      }
    }
    short sfo=op-space-1;
    short sso=(space<<1)-op+1;
    if(i){
      if(sfo==0){
        char so[sso];
        for(i=0;i<space;i++){
          so[i]=line[i];
        }
        printf("%d\n",-atoi(so));
      }else if(sso==0){
        char fo[sfo];
        for(i=0;i<space;i++){
          fo[i]=line[i];
        }
        printf("%d\n",atoi(fo));
      }else{
        char fo[sfo];
        for(i=0;i<sfo;i++){
          fo[i]=line[i];
        }
        char so[sso];
        for(i=space-sso;i<space;i++){
          so[i-sfo]=line[i];
        }
        printf("%d\n",atoi(fo)-atoi(so));
      }
    }else{
      if(sfo==0){
        char so[sso];
        for(i=0;i<space;i++){
          so[i]=line[i];
        }
        printf("%d\n",atoi(so));
      }else if(sso==0){
        char fo[sfo];
        for(i=0;i<space;i++){
          fo[i]=line[i];
        }
        printf("%d\n",atoi(fo));
      }else{
        char fo[sfo];
        for(i=0;i<sfo;i++){
          fo[i]=line[i];
        }
        char so[sso];
        for(i=space-sso;i<space;i++){
          so[i-sfo]=line[i];
        }
        printf("%d\n",atoi(fo)+atoi(so));
      }
    }
  }
  return 0;
}
