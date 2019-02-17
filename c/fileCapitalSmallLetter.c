#include <stdio.h>

/* アルファベットの大文字と小文字を入れ替えて書き込む。
   ASCIIやJISの文字コードを想定して、英大文字、小文字の値が、それぞれ1ずつ増えていくことを利用したプログラムになっている。
   但し、EBCDIC等の文字コードではこの規則は成立しないため、そのような文字コードが採用されている環境にも適用できるプログラムにするためには、全てのアルファベットについて場合分けをする必要が生じてくる。
*/
int main() {
  FILE *input = fopen("input.txt", "r");
  FILE *output = fopen("output.txt", "w");
  int c; // 文字をint型として扱う
  
  while ((c = fgetc(input)) != EOF) { // int fgetc(FILE *stream)は、入力ストリームから次の文字をunsigned char型として読み取り、int型に変換して返す。ストリームでファイルの終わりを検出すると、EOFを返す。
    if (c >= 'A' && c <= 'Z')
      fputc(c+'a'-'A', output); // int fputc(int c, FILE *stream)は、cで指定された文字を、streamにunsigned char型として書き込む。cに'a'-'A'を加えることで、大文字から小文字に変換する。
    else if (c >= 'a' && c <= 'z')
      fputc(c+'A'-'a', output); // cに'A'-'a'を加えることで、小文字から大文字に変換する。
    else
      fputc(c, output); // cがアルファベット以外の文字ならば、そのまま書き込む。
  }
  
  fclose(input);
  fclose(output);
  return 0;
}
