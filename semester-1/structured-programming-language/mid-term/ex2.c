/*
Print the Squares of Numbers from 1 to N
Input: 3
Output:
1 4 9
*/

#include <stdio.h>

int main()
{
  int n;

  printf("Enter your number:\n");
  scanf("%d", &n);

  int i = 0;

  while (++i <= n)
  {
    printf("%d ", i * i);
  }

  return 0;
}
