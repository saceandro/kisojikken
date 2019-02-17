#include <stdio.h>

int min3(int x, int y, int z) {
  /* x, y, z の最小値を返す*/
  int m = x; // mは最小値。暫定的にxとする。
  if (y < m) m = y; // もし暫定的最小値mよりも、yの方が小さければmをyで置き換える。
  if (z < m) m = z; // もし暫定的最小値mよりも、yの方が小さければmをyで置き換える。
  return m; // y,zについても調べた後のmは、真の最小値になっている。
}

int main() {
  int x, y, z;
  scanf("%d%d%d", &x, &y, &z);

  printf("%d\n", min3(x,y,z));
  return 0;
}
