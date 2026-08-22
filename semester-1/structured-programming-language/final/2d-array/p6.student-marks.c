#include <stdio.h>

int main()
{
  int n, m;
  scanf("%d%d", &n, &m);

  float a[n][m], avg[m];

  for (int i = 0; i < n; i++)
  {
    float sum = 0;
    for (int j = 0; j < m; j++)
    {
      scanf("%f", &a[i][j]), sum += a[i][j];
    }
    avg[i] = sum / m;
  }

  float total_marks[m];

  for (int j = 0; j < m; j++)
  {
    float sum = 0;

    for (int i = 0; i < n; i++)
      sum += a[i][j];

    total_marks[j] = sum;
  }

  int student = 0;
  float highest_marks = total_marks[0];

  for (int i = 1; i < m; i++)
    if (total_marks[i] > highest_marks)
      highest_marks = total_marks[i], student = i;

  printf("Total Marks Of Each Student:\n");

  for (int i = 0; i < m; i++)
    printf("Total marks of student %d is = %.2f\n", i + 1, total_marks[i]);

  printf("Student %d got the highest total marks = %.2f\n", student + 1, highest_marks);

  printf("Average Marks of Each Subject Is:\n");

  for (int i = 0; i < n; i++)
    printf("Average marks of subject %d is = %.2f\n", i + 1, avg[i]);

  return 0;
}
