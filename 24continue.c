#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
          printf("Hi %d\n",i);
          if(i==5){
              continue;  //due to continue when i equal to 5 loop stop and restart from next value here hello will not be printed in 5th case 
          }
          printf("Hello! %d\n",i);
    }
    printf("\n\nfinished");
    return 0;
}