#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compareInt(const void *x, const void *y) {
  //int *a = (int*) x;
  //int *b = (int*) y;
  //return *a - *b;
  return *(int*)x - *(int*)y; // x, yをintへのポインタ型にキャストした後、
                              // xがさす先のint型としての値と、yのそれとの差を求めて返す。
}

int compareString(const void *x, const void *y) {
  return strcmp(*(char**)x, *(char**)y);
}

int main() {
  int a[] = {5, 2, 3, 5, 2, 1, 0, 2, 7, 9, 2, 4, 3, 5, 6};
  char *b[] = {"apply", "cab", "but", "cat", "apple", "orange", "cab", "application"};
  int i;
  
  qsort(a, 15, sizeof(int), compareInt);
  qsort(b, 8, sizeof(char*), compareString);
  
  for (i=0; i<15; i++)
    printf("%d ", a[i]);
  printf("\n");

  for (i=0; i<8; i++)
    printf("%s ", b[i]);
  printf("\n");
  
  return 0;
}
