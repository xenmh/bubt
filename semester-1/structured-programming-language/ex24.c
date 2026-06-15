/*
Single Prime Checker: Ask the user for a number. Use a single for loop to check if it is divisible by any number than 1 and itself. Use a "flag" variable (e.g., int isPrime = 1;) inside the loop, and use an if statement at the end to print whether it is prime or not.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  int is_prime = 1;

  for (int i = 2; i < n; i++)
  {
    if (n % i == 0)
    {
      is_prime = 0;
      break;
    }
  }

  if (is_prime)
  {
    printf("The number is prime!");
  }
  else
  {
    printf("The number isn't prime!");
  }

  return 0;
}
