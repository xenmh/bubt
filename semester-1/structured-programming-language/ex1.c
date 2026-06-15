/*
Write a C program that prompts the user to enter a positive integer N and prints all numbers from N down to 1 using a while loop.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number:\n");
  scanf("%d", &n);

  printf("%d", n);

  while (--n)
  {
    printf(" %d", n);
  }

  return 0;
}
