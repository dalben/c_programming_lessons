/*
 * The rand function produces a random value between 0 and RAND_MAX.
 * RAND_MAX is defined at the stdlib library.
 *
 * If you compile and run this program twice, it will produce the same
 * output. That is because the rand function is decided at compilation
 * time.
 */ 

#include <stdlib.h>
#include <stdio.h>

int main() {
	int a = rand();
	printf ("%d\n", a);
	return 0;
}
