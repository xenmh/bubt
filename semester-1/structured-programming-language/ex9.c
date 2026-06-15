/*
Positive, Negative, or Zero: Write a program that asks the user for an integer and uses an if-else if-else chain to print whether the number is positive, negative, or zero.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  if (n > 0)
  {
    printf("The number is positive.");
  }
  else if (n < 0)
  {
    printf("The number is negative.");
  }
  else
  {
    printf("The number is zero.");
  }

  return 0;
}
