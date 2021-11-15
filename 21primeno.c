//programme to find prime number
#include <stdio.h>
int main(){
    int i, num, flag = 0;
    printf("Enter a number : ");
    scanf("%d", &num);
    for(i = 2;i < num;i ++){
        if(num % i == 0){
            flag = 1;
            break;
        }
    }
    if(flag == 1){
        printf("not a prime number");
    }
    else{
        printf("prime number");
    }
    return 0;
}