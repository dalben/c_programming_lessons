#include <stdio.h>

int main()
{
  int n, i = 1, sum = 0;
  scanf ("%d", &n);

  while (i <= n) {
    sum += i*2; // sum = sum + i*2
    printf ("%d ", i*2);
    i++;
  }
  putchar('\n');
  printf ("%d\n", sum);
  return 0;
}
