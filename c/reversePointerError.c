#include <stdio.h>

void swap(int x, int y)
{
  printf("pointer of x in swap: %p\n", &x);
  printf("pointer of y in swap: %p\n", &y);
  int z;

  z = x;
  x = y;
  y = z;
}

int main()
{
  int x = 0, y = 0;
  printf("pointer of x in main: %p\n", &x);
  printf("pointer of y in main: %p\n", &y);

  scanf("%d", &x);
  scanf("%d", &y);
  
  swap(x, y);
  swap(1, 2);

  printf("%d\n", x);
  printf("%d\n", y);

  return 0;
}
