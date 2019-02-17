#include <stdio.h>

int main() {
  int n, k=0; // 入力された非負整数の値をnとする。kは、nの一の位の数。最初は便宜上0と置いておく。
  scanf("%d", &n);

  if (n==0)
    printf("%d", 0);

  else {
    while (k==0) { // nの一の位が0でなくなるまで、nの一の位を削っていく
      k = n%10;
      n /= 10;
    }
    
    printf("%d", k);

    while (n>0) { // nが0になっていなければ、nが0になるまで同様のことを繰り返す（但し今度は、kを全て出力していく）
      k = n%10;
      n /= 10;
      printf("%d", k);
    }
  }
  printf("\n");
  return 0;
}
