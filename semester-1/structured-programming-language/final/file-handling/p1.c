#include <stdio.h>

int main()
{
  FILE *fp = fopen("numbers.txt", "r");
  int sum = 0;

  for (int i = 0; i < 10; i++)
  {
    int num;
    fscanf(fp, "%d", &num);
    sum += num;
    printf("%d ", num);
  }

  printf("\nSum = %d\nAvg = %.2f", sum, (float)sum / 10);

  fclose(fp);

  return 0;
}
