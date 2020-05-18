#include <stdio.h>

int main () {
  // We will use the x variable to store the current number we are checking
  // if it is a prime or not.
  int x = 2, i, n, flag, k = 0;

  // Read how many primes must be printed
  scanf("%d", &n);

  // Initially, k = 0. This tracks how many primes we have printed so far.
  // We stop when k = n, that is, we have printed the n first primes, as
  // requested.
  while (k <= n) {

    // Initialize auxiliary variables
    i = 2;
    flag = 1;

    // We check if x is prime or not (i.e. we set flag = 0 if it is not a prime)
    while (i < x) {
      if (x % i == 0) {
        flag = 0;
        break;
      }

      i++;
    }

    // If it is a prime, print it and increment our counter k
    if (flag == 1) {
      printf("%d ", x);
      k++;
    }

    // Increment x to be tested on the next iteration
    x++;
  }

  putchar('\n');
  return 0;
}
