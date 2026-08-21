/*
Write a C program that prompts the user to enter a positive integer. It then calculates and prints the factorial of that number using a while loop and for loop.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  int factorial = n;

  while (--n)
  {
    factorial *= n;
  }

  printf("The factorial of your number is %d", factorial);

  return 0;
}
