/*
Write a C program that calculates and prints the sum of cubes of even numbers up to a specified limit using a while loop.
*/

#include <stdio.h>

int main()
{
  int n, i = 2, sum = 0;

  printf("Enter your number:\n");
  scanf("%d", &n);

  while (i <= n)
  {
    sum += i * i * i;

    i += 2;
  }

  printf("The sum of cubes of even numbers up to your specified limit %d", sum);

  return 0;
}
