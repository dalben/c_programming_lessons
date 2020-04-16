/*
 * The srand function produces a new seed to be used by the rand function.
 *
 * Run this program multiple times to see its effect.
 */ 

#include <stdlib.h>
#include <stdio.h>
#include <time.h> // The time function belongs to this library

int main() {
	printf ("Before setting the seed, rand produces the random number %d\n", rand());
	srand(time(NULL));
	printf ("After setting the seed, rand produces the random number %d\n", rand());
	return 0;
}
