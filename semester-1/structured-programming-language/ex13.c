/*
The Countdown: Write a program using a while loop that takes a starting number from the user, counts down to 1, and prints "Blastoff!" at the end.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  printf("%d ", n);

  while (--n)
  {
    printf("%d ", n);
  }

  printf("\nBlastoff!");

  return 0;
}
