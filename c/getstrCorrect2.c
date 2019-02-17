#include <stdio.h>

char *getstr()
{
  static char buf[100] = "";
  int x;

  x = scanf("%99s", buf);

  return (x == EOF) ? NULL : buf;
}

int main()
{
  char *s;
  
  while ((s = getstr()) != NULL)
    printf("%s\n", s);

  return 0;
}
