#include <stdio.h>
int main(){
    int i;
    for(i=1;i<=10;i++){
          printf("Hi %d\n",i);
          if(i==5){
              break;  // when i become equal to 5 loop stoping work and exit to out after break
          }
          printf("Hello! %d\n",i);
    }
    printf("\n\nfinished");
    return 0;
}