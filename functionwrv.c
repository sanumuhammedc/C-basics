#include <stdio.h>
void sum(int,int);
int main(){
    int a,b;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    sum(a,b);
    return 0;
}

void sum(int num1,int num2){
    int result;
    result=num1+num2;
    printf("%d + %d = %d\n",num1,num2,result);
}