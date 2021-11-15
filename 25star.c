/*
    * 
   * * 
  * * * 
 * * * * 
* * * * * 

*/

#include <stdio.h>
int main() {
    int i,j,space,row;
    printf("Enter number of rows to be printed: ");
    scanf("%d", &row);
    printf("\n");
    for(i=1;i<=row;i++){
        for(space=row;space>i;space--){ //for putting space 
            printf(" ");
        }
        for(j=1;j<=i;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}