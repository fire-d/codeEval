/* Sample code to read in test cases:*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, const char * argv[]) {
  FILE *file = fopen(argv[1], "r");
  char line[1024];
  short i;
  long pot=0,limit;
  int base=0;
  while (fgets(line, 1024, file)) {
    // Do something with the line
    for(i=strlen(line)-1;i>-1;i--){
      if(line[i]==','){
        base=0;
        char subbuff[i];
        limit=atoi(memcpy(subbuff,&line[0],i));
        break;
      }else if(line[i]!='\n'){
        switch(base){
        case 0:
          pot+=(line[i]-'0');
          break;
        case 1:
          pot+=(line[i]-'0')*10;
          break;
        case 2:
          pot+=(line[i]-'0')*100;
          break;
        case 3:
          pot+=(line[i]-'0')*1000;
          break;
        case 4:
          pot+=(line[i]-'0')*10000;
          break;
        case 5:
          pot+=(line[i]-'0')*100000;
          break;
        case 6:
          pot+=(line[i]-'0')*1000000;
          break;
        case 7:
          pot+=(line[i]-'0')*10000000;
          break;
        case 8:
          pot+=(line[i]-'0')*100000000;
          break;
        case 9:
          pot+=(line[i]-'0')*1000000000;
          break;
        case 10:
          pot+=(line[i]-'0')*10000000000;
          break;
        case 11:
          pot+=(line[i]-'0')*100000000000;
          break;
        }
        base++;
      }
    }
    long origPot=pot;
    while(1){
      if(pot>=limit){
        printf("%d\n",pot);
        break;
      }else{
        pot+=origPot;
      }
    }
    pot=0;
    origPot=0;
  }
  return 0;
}
