#include <stdio.h>

int main()
{
  char s[100], new_s[100];
  gets(s);

  int last_idx = 0;
  new_s[last_idx] = '\0';

  for (int i = 0; s[i] != '\0'; i++)
  {
    if (s[i] == ' ')
    {
      new_s[last_idx] = ' ', new_s[++last_idx] = '\0';
      continue;
    }

    int j = 0, flag = 0;

    while (new_s[j] != '\0')
      if (s[i] == new_s[j++])
      {
        flag = 1;
        break;
      }

    if (!flag)
      new_s[last_idx] = s[i], new_s[++last_idx] = '\0';
  }

  printf("%s", new_s);

  return 0;
}
