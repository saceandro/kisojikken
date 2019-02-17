#include <stdio.h>
#include <stdlib.h>

struct container {
  int number;
  char *string;
};

int main()
{
  struct container c;

  int n=100;       // 入力する文字列の長さを、入力
  scanf("%d", &n);
  
  c.string = malloc(n+1); // ヌル文字を含めてn+1文字分のメモリを確保
  if (c.string==NULL) {   // もしメモリ確保に失敗したら、メッセージを出力して強制終了
    printf("メモリ確保失敗\n");
    exit(1);
  }
  
  scanf("%d", &c.number);
  scanf("%s", c.string);

  printf("%d:%s\n", c.number, c.string);

  free(c.string); // メモリ解放

  return 0;
}
