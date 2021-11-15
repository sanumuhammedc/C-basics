#include <stdio.h>

int main(){

	float mark, result;
	int tmark;
	
	printf("Enter maximum mark: ");
	scanf("%d", &tmark);

	printf("Enter your mark: ");
	scanf("%f", &mark);
	
	result = mark/tmark;

	if(result >= 0.5 && result <= 1){
		printf("Congragulations you passed the exam");
	}

	else if(result >= 0 && result < 0.5){
		printf("sorry you failed, better luck next time");
	}

	else if(result > 1 || result <0){
		printf("There is some error, try again!");
	}

	return 0;
}