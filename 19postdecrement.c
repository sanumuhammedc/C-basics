#include <stdio.h>

int main(){

	int a=10;
	printf("a = %d\n", a);

	int b = a--; //this is post-decrement here 'a' is asigned to 'b' then 1 is substracted from 'a' so 'a' becomes 9 and 'b' becomes 10

	printf("a = %d and b = %d", a, b);

	return 0;
}