#include <stdio.h>

int main(){

	int a=10;
	printf("a = %d\n", a);

	int b = a++; //this is post increment here 'a' is asigned to 'b' then 1 is added to 'a' so 'a' becomes 11 and 'b' becomes 10

	printf("a = %d and b = %d", a, b);

	return 0;
}