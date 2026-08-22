#include <stdio.h>

int main()
{
  FILE *fp = fopen("marks.txt", "r");

  int marks, students = 0, highest = -1, lowest = 101;

  while (fscanf(fp, "%d", &marks) != EOF)
  {
    if (marks > highest)
      highest = marks;
    if (marks < lowest)
      lowest = marks;
    students++;
  }

  printf("Total Students = %d\n", students);
  printf("Highest = %d\nLowest = %d\n", highest, lowest);

  fclose(fp);

  return 0;
}
