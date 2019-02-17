#include <stdio.h>

int main() {
  int c; // 文字をint型の数ととらえる(ASCII等の文字コード)
  int sum=0; // 文字'a'の合計
  while ((c = getchar()) != EOF) { // EOFが入力されるまで一文字ずつ読む
    if (c == 'a') sum++; // 文字'a'の表すint型の数と等しければ、1増やす
  }
  printf("%d\n", sum);
  return 0;
}
