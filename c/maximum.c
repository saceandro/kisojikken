#include <stdio.h>

int main() {
  int a[4] = {}; // 配列aに4つの整数を格納する
  int i;
  
  for (i=0; i<4; i++)
    scanf("%d", &a[i]);

  int max = a[0]; // 最大値をmaxとし、暫定的にa[0]の値にする
  
  for (i=1; i<4; i++) {
    if (a[i]>max) max = a[i]; // もしa[i]がmaxより大きければ、maxの値をa[i]で上書きする。配列を全て見終わったときのmaxの値が、真の最大値となる。
  }
  
  printf("%d\n", max);
  return 0;
}
