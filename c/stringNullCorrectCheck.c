#include <stdio.h>

int main()
{
  const int numberOfChar=10;
  char s[numberOfChar];
  int c;
  int i = 0;

  c = getchar();
  while ((c != EOF) && (i < numberOfChar-1)) {
    s[i++] = c;
    c = getchar();
  }
  printf("i = %d\n", i);
  s[i] = '\0'; // 最後にヌル文字を忘れずに挿入し、「文字列」である文字列リテラルにする。

  int j;
  for (j=0; j<=i; j++)
    printf("%d ", s[j]);
  printf("\n");
  printf("%s", s);

  return 0;
}
