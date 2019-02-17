#include <stdio.h>

int main()
{
  int x = 1;
  int y = 0;

  y = ++x + ++x;
  printf("x: %d\ny: %d\n", x, y);

  return 0;
}
