#include <stdio.h>
int main(){
    int num;
    printf("Enter a number; ");
    scanf("%d",&num); //here %d is called escape sequence
    printf("You have entered %d", num);
    return 0;
}