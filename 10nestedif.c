#include <stdio.h>
int main(){
	int num1, num2, num3;

	printf("This is a programme to find greatest number\n\n\n");
	printf("Enter first number");
	scanf("%d", &num1);

	printf("Enter second number");
	scanf("%d", &num2);

	printf("Enter third number");
	scanf("%d", &num3);

	if(num1 > num2){
		if(num1 > num3){
			printf("Greatest number is %d", num1);
		}
		else{
			printf("Greatest number is %d", num3);
		}
	} 
	else if(num2 > num1){
		if(num2 > num3){
			printf("Greatest number is %d", num2);
		}
		else{
			printf("Greatest number is %d", num3);
		}
	}

	return 0;
}