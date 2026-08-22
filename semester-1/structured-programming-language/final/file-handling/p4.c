#include <stdio.h>

int main()
{
  FILE *fp1 = fopen("marks.txt", "r");

  int marks, students = 0, sum = 0;

  while (fscanf(fp1, "%d", &marks) != EOF)
    sum += marks, students++;

  int avg = sum / students;

  FILE *fp2 = fopen("passed.txt", "w");
  rewind(fp1);

  while (fscanf(fp1, "%d", &marks) != EOF)
    if (marks >= avg)
      fprintf(fp2, "%d\n", marks);

  fclose(fp2);

  FILE *fp3 = fopen("passed.txt", "r");

  int passed = 0;

  while (fscanf(fp3, "%d", &marks) != EOF)
    passed++;

  printf("Number of passed students = %d", passed);

  fclose(fp1);
  fclose(fp3);

  return 0;
}
