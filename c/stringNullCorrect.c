#include <stdio.h>

int main()
{
  char s[100];
  int c;
  int i = 0;

  c = getchar();
  while ((c != EOF) && (i < 99)) { // 文字列にするには最後にヌル文字を挿入しなければならないので、最大で99文字まで読む。
    s[i++] = c;
    c = getchar();
  }

  s[i] = '\0'; // 最後にヌル文字を忘れずに挿入し、文字列にする。

  printf("%s", s);

  return 0;
}
