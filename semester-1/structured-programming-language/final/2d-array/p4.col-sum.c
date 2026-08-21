#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d%d", &n, &m);

  int a[n][m], col_sum[n];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      scanf("%d", &a[i][j]);

  for (int j = 0; j < m; j++)
  {
    int sum = 0;

    for (int i = 0; i < n; i++)
      sum += a[i][j];

    col_sum[j] = sum;
  }

  for (int i = 0; i < n; i++)
    printf("Column %d Sum = %d\n", i + 1, col_sum[i]);

  return 0;
}
