#include <stdio.h>

int main() {
  int x, y;
  scanf("%d%d", &x, &y);
  printf("%lf\n", (double) x / y * 100); // (double) によって、xをint型からdouble型へと一時的にキャスト変換している。%lfは、double型
  return 0;
}
