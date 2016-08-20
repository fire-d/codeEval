#include <stdio.h>
int main(int argc, const char * argv[]){
  FILE *file=fopen(argv[1],"r");
  char line[1024];
  while(fgets(line,1024,file)){
    char col=line[0];
    char row=line[1];
    switch(col){
    case 'a':
      switch(row){
      case '1':
        printf("%c%c %c%c\n",col+1,row+2,col+2,row+1);
        break;
      case '2':
        printf("%c%c %c%c %c%c\n",col+1,row+2,col+2,row-1,col+2,row+1);
        break;
      case '7':
        printf("%c%c %c%c %c%c\n",col+1,row-2,col+2,row-1,col+2,row+1);
        break;
      case '8':
        printf("%c%c %c%c\n",col+1,row-2,col+2,row-1);
        break;
      default:
        printf("%c%c %c%c %c%c %c%c\n",col+1,row-2,col+1,row+2,col+2,row-1,col+2,row+1);
        break;
      }
      break;
    case 'b':
      switch(row){
      case '1':
        printf("%c%c %c%c %c%c\n",col-1,row+2,col+1,row+2,col+2,row+1);
        break;
      case '2':
        printf("%c%c %c%c %c%c %c%c\n",col-1,row+2,col+1,row+2,col+2,row-1,col+2,row+1);
        break;
      case '7':
        printf("%c%c %c%c %c%c %c%c\n",col-1,row-2,col+1,row-2,col+2,row-1,col+2,row+1);
        break;
      case '8':
        printf("%c%c %c%c %c%c\n",col-1,row-2,col+1,row-2,col+2,row-1);
        break;
      default:
        printf("%c%c %c%c %c%c %c%c %c%c %c%c\n",col-1,row-2,col-1,row+2,col+1,row-2,col+1,row+2,col+2,row-1,col+2,row+1);
        break;
      }
      break;
    case 'g':
      switch(row){
      case '1':
        printf("%c%c %c%c %c%c\n",col-2,row+1,col-1,row+2,col+1,row+2);
        break;
      case '2':
        printf("%c%c %c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row+2,col+1,row+2);
        break;
      case '7':
        printf("%c%c %c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row-2,col+1,row-2);
        break;
      case '8':
        printf("%c%c %c%c %c%c\n",col-2,row-1,col-1,row-2,col+1,row-2);
        break;
      default:
        printf("%c%c %c%c %c%c %c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row-2,col-1,row+2,col+1,row-2,col+1,row+2);
        break;
      }
      break;
    case 'h':
      switch(row){
      case '1':
        printf("%c%c %c%c\n",col-2,row+1,col-1,row+2);
        break;
      case '2':
        printf("%c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row+2);
        break;
      case '7':
        printf("%c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row-2);
        break;
      case '8':
        printf("%c%c %c%c\n",col-2,row-1,col-1,row-2);
        break;
      default:
        printf("%c%c %c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row-2,col-1,row+2);
        break;
      }
      break;
    default:
      switch(row){
      case '1':
        printf("%c%c %c%c %c%c %c%c\n",col-2,row+1,col-1,row+2,col+1,row+2,col+2,row+1);
        break;
      case '2':
        printf("%c%c %c%c %c%c %c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row+2,col+1,row+2,col+2,row-1,col+2,row+1);
        break;
      case '7':
        printf("%c%c %c%c %c%c %c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row-2,col+1,row-2,col+2,row-1,col+2,row+1);
        break;
      case '8':
        printf("%c%c %c%c %c%c %c%c\n",col-2,row-1,col-1,row-2,col+1,row-2,col+2,row-1);
        break;
      default:
        printf("%c%c %c%c %c%c %c%c %c%c %c%c %c%c %c%c\n",col-2,row-1,col-2,row+1,col-1,row-2,col-1,row+2,col+1,row-2,col+1,row+2,col+2,row-1,col+2,row+1);
        break;
      }
      break;
    }
  }
  return 0;
}
