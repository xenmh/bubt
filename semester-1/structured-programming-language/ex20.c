/*
The Sentinel Loop: Write a program that repeatedly asks the user to input a number using a while loop. The loop should keep a running total of the numbers entered. The loop should stop when the user enters the sentinel value -1, and then print the final total.
*/

#include <stdio.h>

int main()
{
  int total = 0;

  while (1)
  {
    int n;

    printf("Enter your number: ");
    scanf("%d", &n);

    if (n == -1)
    {
      break;
    }

    total += n;
  }

  printf("Your total is %d", total);

  return 0;
}
