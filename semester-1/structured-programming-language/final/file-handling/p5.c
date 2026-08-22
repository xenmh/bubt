#include <stdio.h>

int main()
{
  FILE *fp1 = fopen("price.txt", "r");
  FILE *fp2 = fopen("expensive.txt", "w");
  int price, products = 0, sum = 0, highest = 0;

  while (fscanf(fp1, "%d", &price) != EOF)
  {
    if (price > highest)
      highest = price;

    if (price > 1000)
      fprintf(fp2, "%d\n", price);

    sum += price, products++;
  }

  printf("Total products = %d\nThe avg price = %d\nThe highest price = %d", products, sum / products, highest);

  fclose(fp1);
  fclose(fp2);

  return 0;
}
