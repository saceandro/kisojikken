#include <stdio.h>

int main() {
  int n;
  scanf("%d", &n);
  if (n>=0) printf("%d\n", n); // 非負整数ならばそのまま出力
  else printf("%d\n", -n); // 負の整数ならば、正負を逆転させて出力
  return 0;
}
