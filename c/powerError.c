#include <stdio.h>

int main()
{
  int a[10], i, j;
  j = 1;
  for (i = 0; i < 10; i++) {
    a[i] = j;
    j = (i + 1) * j;
  }
  printf("%d\n", a[5]);
  return 0;
}
