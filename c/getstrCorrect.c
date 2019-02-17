#include <stdio.h>

int getstr(char *s)
{
  int x;

  x = scanf("%99s", s);

  return (x == EOF) ? 0 : 1;
}

int main()
{
  char s[100];

  while (getstr(s))
    printf("%s\n", s);

  return 0;
}
