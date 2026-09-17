#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size = 5, count = 0, value, sum = 0;

  int *arr = (int *)malloc(size * sizeof(int));

  while (1)
  {
    scanf("%d", &value);

    if (value == -1)
      break;

    if (count == size)
    {
      size *= 2;

      int *temp = (int *)realloc(arr, size * sizeof(int));

      arr = temp;
    }

    arr[count] = value, sum += value, count++;
  }

  printf("\nEntered numbers: ");

  for (int i = 0; i < count; i++)
    printf("%d ", arr[i]);

  printf("\nSum = %d\n", sum);
  printf("Number of integers = %d\n", count);
  printf("Allocated size = %d\n", size);

  free(arr);

  return 0;
}
