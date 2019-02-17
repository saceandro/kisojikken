#include <stdio.h>
#include <stdlib.h>

struct container {
  int number;
  //  char string;
};

int main()
{
  struct container *c;

  //  c = malloc(sizeof(struct container));
  //  if (c == NULL) exit(1);
  printf("%p\n", c);
  printf("%p\n", *c);
  printf("%p\n", &c->number);
  printf("%p\n", c);
  printf("%p\n", *c);
  printf("%p\n", &c->number);
  scanf("%d", &c->number);
  //  scanf("%c", &c->string);
  printf("%d", c->number);
  //  printf("%d:%c\n", c->number, c->string);

  //  free(c);

  return 0;
}
