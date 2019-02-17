#include <stdio.h>

void rev_intarray(int a[], int k) {
  /*　要素数kのint配列aを逆順に並び替える */
  int i;
  int v;
  for (i=0; i<k/2; i++) {
    /*
      配列の要素数kが奇数であっても偶数であっても、
      
      配列の先頭と最後尾の要素を入れ替える
      (先頭+1)と(最後尾-1)の要素を入れ替える
      ...
      (先頭+k/2-1)と(最高尾-k/2+1)の要素を入れ替える
      
      と繰り返せば、aの配列は逆順に並び替えられる。
    */
    v = a[i];
    a[i] = a[k-1-i];
    a[k-1-i] = v;
  }
}

int main() {
  int a[5] = {};
  int i;

  for (i=0; i<5; i++) // 5つの整数の入力を配列に格納
    scanf("%d", &a[i]);
  
  rev_intarray(a, 5); // 配列を逆順に並べ替え
  
  for (i=0; i<5; i++) // 逆順に並び替えられた配列を順に出力
    printf("%d\n", a[i]);

  return 0;
}
