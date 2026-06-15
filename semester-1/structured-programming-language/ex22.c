/*
Reverse the Number: Write a program that takes an integer and uses a while loop to reverse its digits (e.g., 1234 becomes 4321).
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  int reversed_n = 0;

  while (n)
  {
    int digit = n % 10;
    reversed_n = reversed_n * 10 + digit;
    n /= 10;
  }

  printf("Reversed number is %d", reversed_n);

  return 0;
}
