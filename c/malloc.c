#include <stdio.h>
#include <stdlib.h>

int main() {
  char *s = "";
  int n=100;   // 入力できる文字数（実際にはscanf("%d", &n);の入力で指定している。）

  scanf("%d", &n); // 入力できる文字数nを、実行時に指定する。

  s = malloc(n+1); // ヌル文字分も含めて、n+1文字分のメモリを確保
  if (s==NULL) { // もしメモリ確保に失敗した場合は、メッセージを出力して強制終了。
    printf("メモリ確保失敗\n");
    exit(1);
  }

  scanf("%s", s);    // 文字列入力

  printf("%s\n", s); // 入力された文字列を出力

  free(s);           // 確保したメモリの解放

  return 0;
}
