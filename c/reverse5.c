#include <stdio.h>

int main() {
  int a1[5] = {};
  int a2[5];
  int i;
  
  for (i=0; i<5; i++)
    scanf("%d", &a1[i]);

  for (i=0; i<5; i++)
    a2[i] = a1[4-i]; // 配列a2に、a1を逆順に代入していく。

  for (i=0; i<5; i++)
    printf("%d\n", a2[i]);
  
  return 0;
}
