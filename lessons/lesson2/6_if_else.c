/*
 * Examples using conditions: if, else if, else
 *
 */ 

#include <stdlib.h>
#include <stdio.h>
#include <time.h> // The time function belongs to this library

int main() {
	int r;

	srand(time(NULL));
	r = rand() % 100; // Here we limit r between 0 and 99
	printf("Rolled number: %d\nHere are some facts about this number:\n", r);

	
	if (r % 2 == 0) // We compare values using the == operator.
		        // If they are equal, this returns true
		printf("You rolled an even number!\n");
	else
		printf("You rolled an odd number!\n");



	if (r >= 0 && r <= 33) // We can use the operators > < >= <= to compare numbers aswell.
		               // Also, the && operator means AND, which indicates that in order for 
			       // the expression to be true, the operands must be true
		printf("This number is in between 0 and 33\n");
	else if (r > 33 && r < 67) // we can use as many "else if" as we want from now on
		printf("This number is in between 34 and 66\n");
	else
		printf("This number is in between 67 and 99\n");



	if (r != 1) // The != operator means "different"
		printf("You did not roll 1 :-(\n");
	else
		printf("You rolled great number 1! Congrats!\n");




	if (r == 2 || r == 3) // The || operator means OR
			      // One of the two operands must be true for the expression to be true
		printf("You rolled 2 or 3!\n");
	else
		printf("You did not roll 2 or 3\n");



	return 0;
}
