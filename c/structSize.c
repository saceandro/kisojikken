#include <stdio.h>
#include <stdlib.h>

struct container {
  char string1;
  int number;
  char string2;
};

int main()
{
  printf("charの大きさ: %u\n", (unsigned)sizeof(char));
  printf("intの大きさ: %u\n", (unsigned)sizeof(int));
  printf("構造体container全体の大きさ: %u\n", (unsigned)sizeof(struct container));
  printf("構造体containerのメンバの大きさの合計: %u\n", (unsigned)(sizeof(char)+sizeof(int)+sizeof(char)));

  return 0;
}
