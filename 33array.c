#include <stdio.h>
int main(){
    int limit,values[100],sum=0,i;
    printf("Enter array limit: ");
    scanf("%d",&limit);
    printf("\nEnter %d values: \n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
        sum += values[i]; 
    }
    printf("Sum of entered values = %d",sum);
    return 0;
}