#include <stdio.h>

int main()
{
  int x = 0;

  while (scanf("%d", &x) != EOF) {
    printf("%d\n", x * x);
  }

  return 0;
}
