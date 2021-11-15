#include  <stdio.h>
int main(){
    int i,key,values[100],limit,flag=0;
    printf("Enter no of values you wish to enter: ");
    scanf("%d",&limit);
    printf("\nEnter %d values: \n",limit);
    for(i=0;i<limit;i++){
        scanf("%d",&values[i]);
    }
    printf("Enter search key: ");
    scanf("%d",&key);
    for(i=0;i<limit;i++){
        if(key==values[i]){
            flag=1;
            break;
        }
    }
    if(flag==1){
        printf("%d is at %d position",key,i+1);
    }
    else{
        printf("%d not found in the list",key);
    }
    return 0;
}