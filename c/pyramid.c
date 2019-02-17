#include <stdio.h>

int main() {
  int n, i, j;
  scanf("%d", &n);
  for (i=1; i<=n; i++) {
    for (j=1; j<=n-i; j++) printf(" ");   //pyramid左側の余白(n段のピラミッドのとき、上からi段目には、左側にn-i個の空白がある)
    for (j=1; j<=2*i-1; j++) printf("*"); //アステリスク(i段目には、2*i-1個のアステリスクがある)
    printf("\n");
  }
  return 0;
}
