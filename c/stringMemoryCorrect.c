#include <stdio.h>
#include <stdlib.h>

int main()
{
  int len=3;
  char *s;

/*   scanf("%d", &len); */

  s = calloc(1, (len+1) * sizeof(char));
  
  scanf("%s", s);
  
  printf("%s\n", s);

  free(s);

  return 0;
}
