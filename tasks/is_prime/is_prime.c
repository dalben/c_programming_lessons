/* Reads an integer N and outputs if it is a prime or not */

#include <stdio.h>

int main () {
  int x, i = 2, flag = 1; /* If flag = 1, x is a prime, else it is not */

  //read input from keyboard
    scanf("%d", &x);

  while (i < x) {
    if (x % i == 0) {
      flag = 0; // we know x is not a prime
      break; // leave the "while" loop
    }
    i++; // increment i (i.e., i = i + 1;)
  }

  // now we output according to our flag
  if (flag == 1)
    printf("A prime number!\n", x);
  else
    printf("Not a prime number\n", x);

  return 0;
}

