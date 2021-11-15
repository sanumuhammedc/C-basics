#include <stdio.h>

int main(){

	int a=10;
	printf("a = %d\n", a);

	int b = ++a; //this is pre-increment, here 1 is added to 'a' before asigning to 'b' so 'b' becomes 11 'a' also become 11

	printf("a = %d and b = %d", a, b);

	return 0;
}