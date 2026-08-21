#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d%d", &n, &m);

  int a[n][m], row_sum[n];

  for (int i = 0; i < n; i++)
  {
    int sum = 0;

    for (int j = 0; j < m; j++)
      scanf("%d", &a[i][j]), sum += a[i][j];

    row_sum[i] = sum;
  }

  for (int i = 0; i < n; i++)
    printf("Row %d Sum = %d\n", i + 1, row_sum[i]);

  return 0;
}
