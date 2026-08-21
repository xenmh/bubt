/*
Write a program in C to display the cube of the number up to an integer.
Test Data :

Input number of terms : 5

Expected Output :
Number is : 1 and cube of the 1 is :1
Number is : 2 and cube of the 2 is :8
Number is : 3 and cube of the 3 is :27
*/

#include <stdio.h>

int main()
{
  int n, i = 1;

  printf("Enter your number: ");
  scanf("%d", &n);

  while (i <= n)
  {
    printf("Number : %d and cube of the %d is :%d\n", i, i, i * i * i);

    i++;
  }

  return 0;
}
