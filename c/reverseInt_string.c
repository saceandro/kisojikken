#include <stdio.h>
#include <string.h>

int main() {
  const int MAX_N=1000000;
  char n[MAX_N];
  scanf("%s", n);

  int len = strlen(n);

  int i = len-1;
  while (n[i]=='0' && i>=0) i--;
  if (i==-1) printf("%c", n[0]);
  while (i>=0) {
    printf("%c", n[i]);
    i--;
  }
  printf("\n");

  return 0;
}
