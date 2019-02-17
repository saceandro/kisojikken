#include <stdio.h>

int main() {
  if (0) puts("0 Yes");
  else puts("0 No");
  
  if (1) puts("1 Yes");
  else puts("1 No");

  if (2) puts("2 Yes");
  else puts("2 No");

  while (0) puts("0 Yes");
  /*  
  while (1) puts("1 Yes");

  while (2) puts("2 Yes");
  */

  if (NULL) puts("NULL!=0");
  else puts("NULL=0");
  
  printf("2==2: %d\n", (2==2));
  printf("2==3: %d\n", (2==3));
  return 0;
}
