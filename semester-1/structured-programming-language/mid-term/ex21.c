/*
FizzBuzz (Single Loop): Loop from 1 to 100. If the number is divisible by 3, print "Fizz". If divisible by 5, print "Buzz". If divisible by both, print "FizzBuzz". Otherwise, print the number.
*/

#include <stdio.h>

int main()
{
  int i = 1;

  while (i <= 100)
  {
    if (i % 3 == 0 && i % 5 == 0)
    {
      printf("FizzBuzz\n");
    }
    else if (i % 3 == 0)
    {
      printf("Fizz\n");
    }
    else if (i % 5 == 0)
    {
      printf("Buzz\n");
    }
    else
    {
      printf("%d\n", i);
    }

    i++;
  }

  return 0;
}
