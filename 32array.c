#include <stdio.h>  
int main(){
int i, a[100], limit;
printf("Enter array limit :");
scanf("%d", &limit);
printf("Enter %d values: \n", limit);
for(i=0;i<limit;i++){
    scanf("%d", &a[i]);
}
printf("Entered values are :");
for(i=0;i<limit;i++){
    printf("\t%d\t", a[i]);
}
printf("\n");
return 0;
}
