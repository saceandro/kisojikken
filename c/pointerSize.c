#include <stdio.h>

int main() {
  int a=0, b=1, c=2, d=3;
  char *p = "fkal;kf";
  int *q = &b;
  int *r[4] = {&a, &b, &c, &d};
  
  printf("%p\n%p\n%p\n", p, q, r);

  return 0;
}
