#include <stdio.h>

int main()
{
  char s[2] = "";
  s[0] = 'a';
  s[1] = '\0';
  printf("%s\n", s);
  return 0;
}
