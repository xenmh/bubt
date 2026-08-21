/*
Digit Counter: Write a program that takes an integer and uses a while loop to count how many digits it has by repeatedly dividing the number by 10.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  if (n == 0)
  {
    printf("The number has only 1 digit");
    return 0;
  }

  int cnt = 0;

  while (n)
  {
    n /= 10;
    cnt++;
  }

  if (cnt == 1)
  {
    printf("The number has only 1 digit");
    return 0;
  }

  printf("The number has %d digits.", cnt);

  return 0;
}
