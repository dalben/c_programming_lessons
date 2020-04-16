/*
 * Some arithmetic operations between variables.
 */

#include <stdio.h>

int main () {
	int a, b;
	a = 10;
	b = 5;

	printf("Arithmetics using a = %d and b = %d\n", a, b);

	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("Remainder of a / b = %d\n", a%b);



	a = a + 1;
	printf("a = a + 1 increments the value of a, which is now %d\n", a);
	a++;
	printf("a++ also increments the value of a, which is now %d\n", a);
	return 0;

};
