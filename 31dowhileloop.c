#include <stdio.h>
int main(){
    int i=3;
    do{
        printf("%d\n",i);
        i--;
    } while(i>0); //in do while loop condition is checked after executing loop
    printf("finisheed loop");
    return 0;
}