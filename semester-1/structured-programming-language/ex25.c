/*
The Fibonacci Sequence: Print the first N terms of the Fibonacci sequence (0, 1, 1, 2, 3, 5, 8...) using a single loop. This requires carefully updating and swapping two variables to calculate the next term.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  int i = 0, f1 = 0, f2 = 1, f3 = f1 + f2;

  while (i++ < n)
  {
    printf(" %d", f1);
    f3 = f1 + f2, f1 = f2, f2 = f3;
  }

  return 0;
}
