/*
The Even/Odd Gatekeeper: Take an integer input. Use the modulo operator (%) and an if-else statement to determine if it is even or odd.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  if (n % 2)
  {
    printf("The number is odd");
  }
  else
  {
    printf("The number is even");
  }

  return 0;
}
