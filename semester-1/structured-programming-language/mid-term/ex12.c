/*
Desscending Order: Write a program using a for loop to print all numbers from N to 1, where N is provided by the user.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  for (int i = n; i > 0; i--)
  {
    printf("%d ", i);
  }

  return 0;
}
