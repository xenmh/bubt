/*
Leap Year Logic: Ask the user for a year. Use a single if statement with compound logical operators (&& and ||) to determine if it is a leap year. (Rule: Divisible by 4, but NOT 100, unless ALSO divisible by 400).
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0))
  {
    printf("The year is leap year.");
    return 0;
  }

  printf("The isn't leap year.");

  return 0;
}
