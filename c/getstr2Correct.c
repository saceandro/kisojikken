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
  char *s[3];
  int i, j;

  for (i = 0; i < 3; i++) {
    s[i] = malloc(100);
    for (while(
  }

  for (i = 2; 0 <= i; i--) {
    if (s[i] != NULL)
      printf("%s\n", s[i]);
  }

  return 0;
}
