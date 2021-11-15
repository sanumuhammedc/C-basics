#include <stdio.h>
int sum();
int main(){
    int k;
    k=sum();
    printf("result is %d\n",k);
    return 0;
}

int sum(){
    int num1,num2,result;
    printf("Enter 2 numbers: ");
    scanf("%d%d",&num1,&num2);
    result = num1+num2;
    return result;
}