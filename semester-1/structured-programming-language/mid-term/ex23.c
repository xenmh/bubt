/*
Palindrome Checker: Build on problem 16. After reversing the number, use an if-else statement to check if the number and the reversed number are exactly the same.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  int tmp = n, reversed_n = 0;

  while (tmp)
  {
    int digit = tmp % 10;
    reversed_n = reversed_n * 10 + digit;
    tmp /= 10;
  }

  int sum1 = 0, sum2 = 0;

  while (n)
  {
    sum1 += n % 10;
    n /= 10;
  }

  while (reversed_n)
  {
    sum2 += reversed_n % 10;
    reversed_n /= 10;
  }

  if (sum1 == sum2)
  {
    printf("Original and reversed number are same!");
  }
  else
  {
    printf("Original and reversed number aren't same!");
  }

  return 0;
}
