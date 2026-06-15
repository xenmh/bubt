/*
Sum of Natural Numbers: Ask the user for a number N. Use a while loop to calculate the sum of all numbers from 1 to N (e.g., if N=4, sum is 1+2+3+4 = 10).
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  int sum = n;

  while (n--)
  {
    sum += n;
  }

  printf("Sum is %d", sum);

  return 0;
}
