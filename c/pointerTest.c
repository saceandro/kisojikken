#include <stdio.h>

int main() {
  int a[3] = {0, 1, 2};
  int *p;
  p = a;
  printf("%d\n", *(p+1));
  return 0;
}
