#include <stdio.h>

int howManyA(const char s[]) { // 文字列に何個'a'が含まれているかを返す関数
  int i, sum=0; // sumはaの個数
  for (i=0; s[i]!='\0'; i++) { // 終端文字の手前まで一文字ずつ見ていく
    if (s[i] == 'a') sum++; // 文字がaに等しければ、sumを1増やす
  }
  return sum;
}

int main() {
  char s[100] = "";
  scanf("%99s", s); // 最大99文字入力
  printf("%d\n", howManyA(s)); // 上で定義したhowManyA(const char s[])関数を用いる
  return 0;
}
