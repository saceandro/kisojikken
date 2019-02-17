#include <stdio.h>

int main() 
{
  char s[100] = "";
  printf("%p\n", s);

  scanf("%99s", s);

  printf("%p\n", s);

  printf("%p\n", "yes");
  
  if (s=="yes")
    printf("OK");
  else
    printf("NO");
  
  return 0;
}
