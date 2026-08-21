/*
Factorial Calculator: Calculate N! (Factorial) using a for loop. Include an if statement at the beginning to handle the edge case where the user inputs 0 (since 0! = 1) or a negative number.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  if (n < 0)
  {
    printf("Factorial doesn't work for negative numbers!");
  }
  else if (!n)
  {
    printf("Factorial of 0 is 1");
  }
  else
  {
    int factorial = 1;

    for (int i = 2; i <= n; i++)
    {
      factorial *= i;
    }

    printf("Factorial of %d is %d", n, factorial);
  }

  return 0;
}
