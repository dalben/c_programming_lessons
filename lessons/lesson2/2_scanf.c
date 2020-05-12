/*
 * The scanf function, which resides on the stdio.h library,
 * allows us to read input (usually from a keyboard);
 *
 */

#include <stdio.h>

int main () {
	int i; // here we tell the compiler to allocate memory for an integer
					   
	printf ("Please type an integer: "); // some pretty output to ask the user to
                                             // input something
	scanf("%d", &i); // waits for keyboard input

	/* 
	 * Notice that the scanf function takes at least two arguments:
	 * - The string pattern to be read "%d" which expects and integer
	 * - The address of the variable i, which is obtained with the & prefix.
	 *
	 *   &i means: "the address of i", which is some cell in your memory system
	 *   i means: "the value of i", which is the value stored in that cell
	 *
	 *   We will cover addresses later.
	 *
	 */

	printf ("You just typed %d!\n", i); // print it back to the user
	return 0;
}
