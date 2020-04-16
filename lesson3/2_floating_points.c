/*
 * Floating points (floats) are variable types that can store
 * decimal points. Integers cannot.
 *
 */

#include <stdio.h>

int main() {

	int sum = 59, count = 4;
	float mean;

	/* 
	 * Here we need to add the (float) prefix. This is called "casting".
	 * Casting is the conversion of one datatype into another.
	 * If we had omitted this prefix, an integer division would return an integer
	 * as well. Run this program and to study its output.
	 *
	 */
	mean = sum / count; 
	printf("Value of mean *without* casting: %f\n", mean);

	mean = (float) sum / count; 
	printf("Value of mean *with* casting: %f\n", mean);
	printf("Value of mean with 2 decimal digits: %.2f\n", mean);
	printf("Value of mean with 1 decimal digit: %.1f\n", mean);
	return 0;
}
