#include <stdio.h>
#include <stdlib.h>

int main() {
  char st[128];
  char *pt;
  int len=0;
  int i;

  printf("文字列stを入力してください: ");
  scanf("%s", st);

  while(st[len]) len++;

  for (i=0; i<=len; i++)
    printf("%d ", st[i]);
  printf("\n");

  pt = malloc((len+1) * sizeof(char));
  
  if (pt) {
    for (i=0; i<=len; i++) {
      pt[i] = st[i];
    }
    printf("st = %s\n", st);
    printf("pt = %s\n", pt);
    free(pt);
  }
  
  else {
    printf("メモリ確保失敗");
  }

  return 0;
}
