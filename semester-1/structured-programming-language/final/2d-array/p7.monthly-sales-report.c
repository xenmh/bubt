#include <stdio.h>

int main()
{
  int n = 4, m = 7;
  float a[n][m], total_sales_of_each_product[n];

  for (int i = 0; i < n; i++)
  {
    float sum = 0;

    for (int j = 0; j < m; j++)
      scanf("%f", &a[i][j]), sum += a[i][j];

    total_sales_of_each_product[i] = sum;
  }

  int day = 0;
  float highest_total_sales_of_single_day = 0;

  for (int j = 0; j < m; j++)
  {
    float sum = 0;

    for (int i = 0; i < n; i++)
      sum += a[i][j];

    if (sum > highest_total_sales_of_single_day)
      highest_total_sales_of_single_day = sum, day = j;
  }

  int product = 0;
  float highest_weekly_sales_product = total_sales_of_each_product[0];

  for (int i = 1; i < n; i++)
    if (total_sales_of_each_product[i] > highest_total_sales_of_single_day)
      highest_weekly_sales_product = total_sales_of_each_product[i], product = i;

  printf("Each Product Total Sales Down Below:\n");

  for (int i = 0; i < n; i++)
  {
    printf("Product %d got total sales of = %.2f\n", i + 1, total_sales_of_each_product[i]);
  }

  printf("Day %d got the total highest sales of = %.2f\n", day + 1, highest_total_sales_of_single_day);

  printf("Product %d got the total highest weekly sales of = %.2f", product + 1, highest_weekly_sales_product);

  return 0;
}
