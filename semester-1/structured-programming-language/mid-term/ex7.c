/*
Write a C program to find and print the first 10 Fibonacci numbers using a while loop.
*/

#include <stdio.h>

int main()
{
  int i = 3, f1 = 0, f2 = 1, f3 = f1 + f2;

  printf("Your first 10 fibonacci series is %d %d", f1, f2);

  while (i++ <= 10)
  {
    printf(" %d", f3);
    f1 = f2, f2 = f3, f3 = f1 + f2;
  }

  return 0;
}
