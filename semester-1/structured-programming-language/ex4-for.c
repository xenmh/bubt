/*
Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a for loop. Calculate and print the sum of all the positive integers entered.
*/

#include <stdio.h>

int main()
{
  int sum = -1;

  for (int n = 1; n; scanf("%d", &n))
  {
    printf("For stop your calculation enter 0!\nEnter your number:");

    if (n > 0)
    {
      sum += n;
    }
  }

  printf("The sum of all the positive integers %d", sum);

  return 0;
}
