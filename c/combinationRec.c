#include <stdio.h>

int combination(int n, int r) {
  /* nCrを返す */
  if (n < r) { // n < r ならば、そのような選び方は存在しないから、組み合わせ数は0
    return 0;
  }
  else if (r==0) { // n(>=0)が何であっても、0個選ぶ方法は1通りだから、組み合わせ数は1
    return 1;
  }
  else { // n個からr個選ぶ方法の数は、(n-1)個からr個選ぶ方法の数と、(n-1)個から(r-1)個選ぶ方法の数の和に等しい。
    return combination(n-1, r) + combination(n-1, r-1);
  }
}

int main() {
  int n, r;
  scanf("%d%d", &n, &r);
  printf("%d\n", combination(n,r));
  return 0;
}
