#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);

  int even = 0, odd = 0;
  int *arr = (int *)malloc(n * sizeof(int));

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);

    if (arr[i] % 2 == 0)
      even++;
    else
      odd++;
  }

  printf("Even = %d\n", even);
  printf("Odd = %d\n", odd);

  int j = 0;
  int *arr2 = (int *)malloc(even * sizeof(int));

  for (int i = 0; i < n; i++)
    if (arr[i] % 2 == 0)
      arr2[j] = arr[i], j++;

  printf("Even numbers: ");

  for (int i = 0; i < even; i++)
    printf("%d ", arr2[i]);

  free(arr);
  free(even);

  return 0;
}
