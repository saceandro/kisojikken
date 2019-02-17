#include <stdio.h>

char *first_char(char *s, char c) {
  
  /* 文字列sの中にcが含まれていれば、その最初の文字へのポインタを、含まれていなければ、NULLを返す */

  while (*s) {             // *sが0(ヌル文字)でなくなるまで
    if (*s == c) return s; // 最初に文字cに一致したところで、そのポインタを返す
    s++;                   // 一致しなければポインタの値を増やす(次の文字へのポインタにする)
  }
  return NULL;             // ヌル文字までcに一致しなければNULLを返す
}

int main() {
  char s[100] = "";
  
  scanf("%99s", s);        // 最大99文字入力。最後に自動で'\0'を付加
  
  char *first_a = first_char(s, 'a'); // 最初の'a'へのポインタをfirst_aとする
  
  if (first_a == NULL)       // first_aがNULLであれば、noと表示
    printf("no\n");
  else
    printf("%s\n", first_a); // NULLでなければ、first_aは最初の'a'へのポインタであって、その後ヌル文字までが一つの文字列と見なされるので、first_aは'a'から始まる部分文字列と考えることができる。
  
  return 0;
}
