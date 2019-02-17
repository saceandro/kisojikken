#include <stdio.h>

int main()
{
  int x = 1;
  int y = 0;

  int z = ++x;
  int w = ++x;
  y = w+w;
  printf("x: %d\ny: %d\n", x, y);

  return 0;
}
