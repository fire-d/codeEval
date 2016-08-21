/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  short i,sum=0;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    i=0;
    while(i<19){
      if(line[i]!=' '){
        if((i==0)||(i==2)||(i==5)||(i==7)||(i==10)||(i==12)||(i==15)||(i==17)){
          sum+=((line[i]-'0')<<1);
        }else if((i==1)||(i==3)||(i==6)||(i==8)||(i==11)||(i==13)||(i==16)||(i==18)){
          sum+=(line[i]-'0');
        }
      }
      i++;
    }
    if(!(sum%10)){
      printf("Real\n");
    }else{
      printf("Fake\n");
    }
    sum=0;
  }
  return 0;
}
