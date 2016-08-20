#include <stdio.h>
#include <string.h>
int main(int argc, const char * argv[]){
  FILE *file = fopen(argv[1],"r");
  char line[1024];
  char slang[93]=", yeah!, this is crazy, I tell ya., can U believe this?, eh?, aw yea., yo.? No way!. Awesome!";
  short slangLength[8][2];
  slangLength[0][0]=7;
  slangLength[0][1]=0;
  slangLength[1][0]=27;
  slangLength[1][1]=7;
  slangLength[2][0]=21;
  slangLength[2][1]=34;
  slangLength[3][0]=5;
  slangLength[3][1]=55;
  slangLength[4][0]=9;
  slangLength[4][1]=60;
  slangLength[5][0]=5;
  slangLength[5][1]=69;
  slangLength[6][0]=9;
  slangLength[6][1]=74;
  slangLength[7][0]=10;
  slangLength[7][1]=83;
  short i,j,k;
  j=0;
  k=0;
  while(fgets(line,1024,file)){
    for(i=0;i<strlen(line);i++){
      if(line[i]=='.'||line[i]=='!'||line[i]=='?'){
        if(j){
          for(j=slangLength[k][1];j<slangLength[k][0]+slangLength[k][1];j++){
            printf("%c",slang[j]);
          }
          if(k<7){
            k++;
          }else{
            k=0;
          }
          j=0;
        }else{
          printf("%c",line[i]);
          j=1;
        }
      }else{
        printf("%c",line[i]);
      }
    }
  }
  return 0;
}
