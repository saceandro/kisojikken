#include <stdio.h>
#include <string.h>

int combination(int n, int r, int **c) {
  /* nCrを返す */
  
  if (c[n][r]>=0){
    return c[n][r];
  }
  else if (n < r) {
    return c[n][r]=0;
  }
  else if (r==0) {
    return c[n][r]=1;
  }
  else {
    return c[n][r] = combination(n-1, r, c) + combination(n-1, r-1, c);
  }
}

int main() {
  //  int n, r;
  int c[1001][1001];
  memset(c, -1, sizeof(c));

  //  scanf("%d%d", &n, &r);
  printf("%d\n", combination(30,15,c));
  return 0;
}
