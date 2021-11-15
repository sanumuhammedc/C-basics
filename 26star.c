//star pattern in reverse order
#include <stdio.h>
int main(){
    int i,j,row; //i represent row and j represent column(assume as a box)
    printf("Enter Number of rows to be printed: ");
    scanf("%d", &row);
    printf("\n\n");
    for(i = row; i >= 1; i--){
        for(j = i; j < row; j++){   //this for loop is for giving space
            printf(" ");
        }
        for(j = i; j >=1; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}