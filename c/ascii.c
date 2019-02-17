#include <stdio.h>

int main() {
  int i;

  for (i=65; i<=90; i++)
    printf("%c%c", i, 32); // 32は、スペース

  printf("%c", 9); // 水平タブ

  for (i=97; i<=122; i++)
    printf("%c ", i);

  printf("\n");

  printf("%d\n", '\0');
  return 0;
}
