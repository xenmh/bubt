/*
Write a C program that prompts the user to enter an integer and prints its multiplication table up to 10 using a while loop.

Input: 7

Output:
7 x 1 = 7
7 x 2 = 14
...
7 x 10 = 70
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number:\n");
  scanf("%d", &n);

  int i = 0;

  while (++i <= 10)
  {
    printf("%d x %d = %d\n", n, i, i * n);
  }

  return 0;
}
