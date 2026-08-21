#include <stdio.h>

int main()
{
  int a[8];

  for (int i = 0; i < 8; i++)
  {
    scanf("%d", &a[i]);
  }

  int highest = a[0], lowest = a[0], sum = 0;

  for (int i = 0; i < 8; i++)
  {
    if (a[i] > highest)
    {
      highest = a[i];
    }

    if (a[i] < lowest)
    {
      lowest = a[i];
    }

    sum += a[i];
  }

  printf("Highest Score = %d\nLowest Score = %d\nAverage Score = %.2f", highest, lowest, (float)sum / 8);

  return 0;
}
