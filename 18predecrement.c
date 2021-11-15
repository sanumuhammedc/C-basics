#include <stdio.h>

int main(){

	int a=10;
	printf("a = %d\n", a);

	int b = --a; //this is pre-decrement, here 1 is substracted from 'a' before asigning to 'b' so 'b' becomes 9 'a' also become 9

	printf("a = %d and b = %d", a, b);

	return 0;
}