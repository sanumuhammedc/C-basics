#include <stdio.h>
int main(){
	int a=6, b=4;
	printf("Before swapping a = %d and b = %d\n\n", a, b);
	a += b;
	b = a-b;
	a -= b;
	printf("After swapping a = %d and b = %d", a, b);
	return 0;
}