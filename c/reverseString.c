#include <stdio.h>

void reverseString(char a[], const char s[], const int len) { // 配列を逆順にコピーする関数。長さlenの文字列sを、逆順にしてaにコピーする。)
  int i;
  
  for (i=0; i<len; i++)
    a[i] = s[len-1-i]; // 入力された文字列の最後尾の文字(終端文字を除く)から先頭文字まで、コピーしていく

  a[len] = '\0'; // 最後に終端文字を挿入する
}

int main() {
  char s[100] = ""; // 入力された文字列を保持する配列
  char a[100]; // 逆順に変換したものを保持する配列
  int len=0; // lenは、入力された文字列の長さ

  scanf("%99s", s);

  while (s[len]!='\0') // 入力された文字列(終端文字を除く)の長さを求める
    len++;
  
  reverseString(a, s, len); // 上で定義した、配列を逆順にコピーする関数を使用

  printf("%s\n", a); // 逆順にコピーしたものを出力

  return 0;
}
