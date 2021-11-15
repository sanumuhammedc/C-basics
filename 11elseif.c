#include <stdio.h>
int main(){
	int num1, num2, choice;
	printf("Enter 2 numbers: ");
	scanf("%d %d", &num1, &num2);
	printf(" 1) add\n 2) minus\n 3) divide\n 4) multiply");
	scanf("%d", &choice);
	if(choice == 1){
		printf("Answer = %d", num1 + num2);
	}

	else if(choice == 2){
			printf("Answer = %d", num1 - num2);
		}

	else if(choice == 3){
			printf("Answer = %d", num1 / num2);
		}

	else if(choice == 1){
			printf("Answer = %d", num1 * num2);
		}	
		else{
			printf("Enter correct option");
		}
	return 0;
}