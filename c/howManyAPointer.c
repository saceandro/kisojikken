#include <stdio.h>
// #include <stdlib.h> // mallocを使う場合

int main() {
  char s[100] = "";
  int sum=0;        // 'a'の出現回数
  int i;
  /*
  //別の方法
    char *s = "";
    s = malloc(100 * sizeof(char)); // 但し、sizeof(char)=1byteなので、
                                    // s = malloc(100); でもよい
                                    // mallocは、引数のサイズの領域を確保し、その領域の先頭へのポインタを返す。確保に失敗した場合は、NULLを返す。
				    */
  scanf("%99s", s);  // 最大99文字の入力を受け取り、最後に自動的にヌル文字を付加する
  printf("%s\n", s); // 入力された文字列の表示
  
  for (i=0; *(s+i)!='\0'; i++) { // ヌル文字の手前まで繰り返す
    if (*(s+i) == 'a') {         // もし文字が'a'であれば
      sum++;                     // sumを1増やす
    }
  }

  printf("%d\n", sum);           // 'a'の出現回数を表示

  //  free(s); // mallocを用いた場合、sに割り当てたメモリを解放

  return 0;
}
