//function without argument without return value
#include <stdio.h>
void sum();
int main(){
     sum();
    return 0;
}

void sum(){
    int a,b,sum;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    sum=a+b;
    printf("\n%d + %d = %d\n",a,b,sum);
}