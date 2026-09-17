#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);

  int *p = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &p[i]);
  }

  int largest = p[0];
  int smallest = p[0];

  for (int i = 1; i < n; i++)
  {
    if (p[i] > largest)
      largest = p[i];

    if (p[i] < smallest)
      smallest = p[i];
  }

  printf("Largest = %d\n", largest);
  printf("Smallest = %d\n", smallest);

  free(p);

  return 0;
}
