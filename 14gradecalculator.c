#include <stdio.h>

int main(){

	float mark, result;
	int tmark;
	
	printf("*********************************\n");
	printf("        Grade Calculator         \n");
	printf("*********************************\n");
	printf("Enter maximum mark: ");
	scanf("%d", &tmark);

	printf("Enter your mark: ");
	scanf("%f", &mark);
	
	result = mark/tmark;

	if(result >= 0.9 && result <= 1){
		printf("Congragulations you got A grade");
	}

	else if(result >= 0.8 && result < 0.9){
		printf("Congragulations you got B grade");
	}

	else if(result >= 0.7 && result < 0.8){
		printf("Congragulations you got C grade");
	}

	else if(result >= 0.6 && result < 0.7){
		printf("Congragulations you got D grade");
	}

	else if(result >= 0.5 && result < 0.6){
		printf("Congragulations you got A grade");
	}

	else if(result >= 0 && result < 0.5){
		printf("sorry you failed, better luck next time");
	}

	else if(result > 1 || result <0){
		printf("There is some error, try again!");
	}

	return 0;
}