/*
Sum of Evens Only: Write a program that uses a for loop to find the sum of all even numbers between 1 and a user-provided N. Use an if statement inside the loop to check for evenness.
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number: ");
  scanf("%d", &n);

  int sum = 0;

  for (int i = 1; i <= n; i++)
  {
    if (!(i % 2))
    {
      sum += i;
    }
  }

  printf("The even sum is %d", sum);

  return 0;
}
