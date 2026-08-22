#include <stdio.h>

int main()
{
  FILE *fp1 = fopen("numbers.txt", "r");
  FILE *fp2 = fopen("positive.txt", "w");

  int num, pos = 0, neg = 0, zero = 0;

  while (fscanf(fp1, "%d", &num) != EOF)
  {
    if (num > 0)
      fprintf(fp2, "%d\n", num), pos++;
    else if (num < 0)
      neg++;
    else
      zero++;
  }

  printf("Pos = %d\nNeg = %d\nZero = %d", pos, neg, zero);

  fclose(fp1);
  fclose(fp2);

  return 0;
}
