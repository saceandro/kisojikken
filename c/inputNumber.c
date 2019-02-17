#include <stdio.h>

int main()
{
  int x = 0;
  int i;

  while ((i = scanf("%d", &x)) != EOF) {
    if (i==1)
      printf("%d\n", x * x);
    else {
      scanf("%*c");
    }
  }
  return 0;
}
