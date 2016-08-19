/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  while (fgets(line, 1024, file)) {
    // Do something with the line
    int i;
    i=strlen(line)-2;
    int flag=0;
    int count=0;
    int bitPosition=0;
    unsigned long long aux=0;
    unsigned long long result=0;
    while(i>=-1){
      if(i==-1){
        if(flag==2){
          flag=0;
          while(flag<count){
            aux=1;
            aux=~(aux<<(flag+bitPosition));
            result&=aux;
            flag++;
            if(flag+bitPosition>63){
              flag=0;
              count=0;
              i=-2;
            }
          }
          bitPosition+=count;
          flag=0;
          count=0;
        }else{
          flag=0;
          while(flag<count){
            aux=1;
            aux=(1<<(flag+bitPosition));
            result|=aux;
            flag++;
            if(flag+bitPosition>63){
              flag=0;
              count=0;
              i=-2;
            }
          }
          bitPosition+=count;
          flag=0;
          count=0;
        }
      }
      else if(!flag){  
        if(line[i]!=' '){
          count++;
        }else{
          flag=1;
        }
      }else{
        if(line[i]!=' '){
          flag++;
        }else if(flag==2){
          flag=0;
          while(flag<count){
            aux=1;
            aux=~(aux<<(flag+bitPosition));
            result&=aux;
            flag++;
            if(flag+bitPosition>63){
              flag=0;
              count=0;
              i=-2;
            }
          }
          bitPosition+=count;
          flag=0;
          count=0;
        }else{
          flag=0;
          while(flag<count){
            aux=1;
            aux=(1<<(flag+bitPosition));
            result|=aux;
            flag++;
            if(flag+bitPosition>63){
              flag=0;
              count=0;
              i=-2;
            }
          }
          bitPosition+=count;
          flag=0;
          count=0;
        }
      }
      i--;
    }
    bitPosition=0;
    result&=0xFFFFFFFF;
    printf("%llu\n",result);
    result=0;
    i=0;
  }
  return 0;
}
