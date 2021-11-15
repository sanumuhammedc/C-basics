#include <stdio.h>
int main(){
    int i,input;
    printf("Enter the number whose multiplication table has to be printed: ");
    scanf("%d",&input);
    printf("\n");

    for(i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", i, input, i*input);

    }
    return 0;
}