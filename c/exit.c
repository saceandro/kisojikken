#include <stdio.h>
#include <stdlib.h>

int main() {
  int x=0;
  scanf("%d", &x);
  if (x==0) {
    printf("失敗\n");
    exit(1);
  }
  return 0;
}
