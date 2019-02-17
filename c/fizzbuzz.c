#include <stdio.h>

int main() {
  int x, y;
  scanf("%d%d", &x, &y);
  int i;
  for (i=x; i<=y; i++) {
    if (i%3==0 && i%5==0) printf("FizzBuzz "); // 5の倍数かつ3の倍数のとき
    else if (i%3==0) printf("Fizz "); // 上記ではないが、3の倍数のとき
    else if (i%5==0) printf("Buzz "); // 上記ではないが、5の倍数のとき
    else printf("%d ", i); // 上記のいずれでもないときは、その数を出力
  }
  printf("\n");
  return 0;
}
