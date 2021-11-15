//programme to find sum of odd numbers upto a given limit
#include <stdio.h>
int main(){
    int i,sum=0,limit;
    printf("***********************************************************\n");
    printf(" programme to find sum of odd numbers upto a given limit\n");
    printf("***********************************************************\n");
    printf("Enter the limit: ");
    scanf("%d",&limit);
    printf("\n");
    for(i=1;i<=limit;i++){
        if(i%2==1){
            sum += i;
        }
    } 
    printf("sum of odd numbers upto %d = %d\n",limit,sum);
return 0;
}