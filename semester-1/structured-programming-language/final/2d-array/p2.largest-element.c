#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d%d", &n, &m);

  int a[n][m];

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      scanf("%d", &a[i][j]);

  int mx_elem = a[0][0];
  int row = 0, col = 0;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      if (a[i][j] > mx_elem)
        mx_elem = a[i][j], row = i, col = j;

  printf("The largest element = %d\n", mx_elem);
  printf("Row Position = %d\n", row + 1);
  printf("Column Position = %d\n", col + 1);

  return 0;
}
