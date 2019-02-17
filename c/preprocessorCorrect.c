#include <stdio.h>

#define DEBUG 0

int main()
{
  int x = 0;

#if DEBUG
  /*
    x = 1; /* 代入 */
  */
#endif
    printf("%d\n", x);

    return 0;
}
