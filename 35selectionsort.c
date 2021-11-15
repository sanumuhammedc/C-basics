#include  <stdio.h>
int main(){
    int i,values[100],limit,temp,j;
    printf("Enter no of values you wish to enter: ");
    scanf("%d",&limit);
    printf("\nEnter %d values: \n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }
    for(i=0;i<limit-1;i++){
        for(j=i+1;j<limit;j++){
            if(values[i]>values[j]){
                temp = values[i];
                values[i]=values[j];
                values[j]=temp;
            }
        }
    }
        for(i=0;i<limit;i++){
            printf("%d\t",values[i]);
        }    
    return 0;
}