#include <stdio.h>

int main() {
  char s[100] = "";

  scanf("%99s", s);

  if (s == "yes")
    puts("OK!");
  else
    puts("NG!");

  return 0;
}
