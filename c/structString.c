#include <stdio.h>
#include <stdlib.h>

struct container {
  int number;
  char *string;
};

int main() {
  printf("構造体のメンバの合計の大きさ: %u\n", (unsigned)(sizeof(int)+sizeof(char*)));
  printf("構造体全体の大きさ: %u\n", (unsigned)sizeof(struct container));

  return 0;
}
