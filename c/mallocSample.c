#include <stdio.h>
#include <stdlib.h>

int main() {
  char *s = "";

  s = malloc(100 * sizeof(char)); // sizeof(char)は1なので、s = malloc(100);でも可。ヌル文字を含めて100文字分メモリを確保する。確保できた場合は先頭のポインタが返る。できなかったときはNULLが返る。

  if (s==NULL) { // メモリを確保できなかった場合
    printf("メモリ確保失敗");
  }
  else { // メモリを確保できた場合
    scanf("%99s", s); // 最大99文字入力
    printf("%s\n", s);
    free(s); // メモリの解放
  }

  return 0;
}
