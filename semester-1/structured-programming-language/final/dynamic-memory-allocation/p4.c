#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n;
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));

  int sum = 0;

  for (int i = 0; i < n; i++)
    scanf("%d", &arr[i]), sum += arr[i];

  float average = (float)sum / n;

  int count = 0;

  for (int i = 0; i < n; i++)
    if (arr[i] > average)
      count++;

  int *greater = (int *)malloc(count * sizeof(int));

  int j = 0;

  for (int i = 0; i < n; i++)
    if (arr[i] > average)
      greater[j] = arr[i], j++;

  printf("Average = %.2f\n", average);
  printf("New array size = %d\n", count);
  printf("Values greater than average: ");

  for (int i = 0; i < count; i++)
    printf("%d ", greater[i]);

  free(arr);
  free(greater);

  return 0;
}
