/*
 * Loops using while, do/while and for.
 */ 

#include <stdlib.h>
#include <stdio.h>

int main() {
	int i = 0;

	printf("Initial value of i: %d\n", i);

	printf ("Incrementing i inside a while loop:\n", i);
	while (i < 5) {
		printf ("%d ", i);
		i++;
	}
	putchar('\n');

	printf("Current value of i: %d\n", i);

	printf ("Now we decrement it inside a do/while loop:\n", i);
	do {
		printf ("%d ", i);
		i--;
	}
	while (i > 0);
	putchar('\n');


	printf ("Now, on a for loop, we set i to 20 and decrement it back again:\n", i);
	
	for (i = 20; i > 0; i--)
		printf ("%d ", i);


	return 0;
}
