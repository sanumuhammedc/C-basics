//function with return value and with argument
#include <stdio.h>
int sum(int,int);
int main(){
    int a,b,res;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    res=sum(a,b);
    printf("result = %d\n",res);
    return 0;
}

int sum(int num1,int num2){
    int result=num1+num2;
    return result;
}