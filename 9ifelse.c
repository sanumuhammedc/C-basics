#include <stdio.h>
int main(){
	int num1, num2;
	printf("Enter 1st number: ");
	scanf("%d", &num1);

	printf("Enter 2nd number: ");
	scanf("%d", &num2);

	if(num1 > num2){
		printf("Greatest number is %d", num1);
	}
	else{
		printf("Greatest number is %d", num2);
	}
	return 0;
}