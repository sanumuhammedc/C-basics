#include <stdio.h>
int main(){
	int p;
	float r, n, si;
	printf("Enter principal amount: ");
	scanf("%d", &p);

	printf("Enter rate of intrest: ");
	scanf("%f", &r);

	printf("Enter number of years: ");
	scanf("%f", &n);

	si=(p*r*n)/100;

	printf("Simple intrest = %f", si);
	printf("Final amount = %f", si + p);

	return 0;
}