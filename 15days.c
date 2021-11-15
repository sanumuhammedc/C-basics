#include <stdio.h>
int main(){

	int choice;

	printf("******************************************************************\n");
	printf("   Enter number from 1 to 7, corresponding day will be printed    \n");
	printf("******************************************************************\n");

	scanf("%d", &choice);

	switch(choice){

		case 1:
		printf("Sunday");
		break;

		case 2:
		printf("Monday");
		break;

		case 3:
		printf("Tuesday");
		break;

		case 4:
		printf("Wednesday");
		break;

		case 5:
		printf("Thursday");
		break;

		case 6:
		printf("Friday");
		break;

		case 7:
		printf("Saturday");
		break;

		default:
		printf("oops something went wrong please enter a number between 1 to 7");

	}

	return 0;
}