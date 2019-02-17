#include <stdio.h>

void swap(int *a, int *b)
{
  int z;
  // ポインタaの指すアドレスが保持する値と、ポインタbの指すアドレスが保持する値を入れ替える。
  z = *a;
  *a = *b;
  *b = z;
}

int main()
{
  int x = 0, y = 0;

  scanf("%d", &x);
  scanf("%d", &y);

  swap(&x, &y); // 引数にはx, yのポインタを渡す。

  printf("%d\n", x);
  printf("%d\n", y);

  return 0;
}
