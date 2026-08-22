#include <stdio.h>

int main()
{
  int n = 4, m = 7, a[n][m], tsp[n];

  for (int i = 0; i < n; i++)
  {
    int sum = 0;

    for (int j = 0; j < m; j++)
      scanf("%d", &a[i][j]), sum += a[i][j];

    tsp[i] = sum;
  }

  int day = 0, htsd = 0;

  for (int j = 0; j < m; j++)
  {
    int sum = 0;

    for (int i = 0; i < n; i++)
      sum += a[i][j];

    if (sum > htsd)
      htsd = sum, day = j;
  }

  int product = 0, hwsp = tsp[0];

  for (int i = 1; i < n; i++)
    if (tsp[i] > hwsp)
      product = i;

  for (int i = 0; i < n; i++)
    printf("Product %d total = %d\n", i + 1, tsp[i]);

  printf("Highest total sales day = Day %d\n", day + 1);
  printf("Highest weekly sales product = Product %d", product + 1);

  return 0;
}
