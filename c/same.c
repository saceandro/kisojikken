#include <stdio.h>

int main() {
  int a[3] = {}; // 3つの整数を格納する配列a
  int i;
  
  for (i=0; i<3; i++) scanf("%d", &a[i]);
  
  if (a[0]==a[1] && a[1]==a[2]) printf("A\n"); // 3つとも同じならAを出力
  else if (a[0]==a[1] || a[1]==a[2] || a[2]==a[0]) printf("B\n"); // ３つとも同じではないが、いずれか2つが同じであれば、Bを出力
  else printf("C\n"); // 上記のいずれでもなければ、Cを出力

  return 0;
}
