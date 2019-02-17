#include <stdio.h>

int main() {
  FILE *input = fopen("input.txt", "r");
  FILE *output = fopen("output.txt", "w");
  char c;
  
  while (fscanf(input, "%c", &c) != EOF) {
    if (c >= 65 && c <=90)
      fprintf(output, "%c", c+32);
    else if (c >=97 && c <= 122)
      fprintf(output, "%c", c-32);
    else
      fprintf(output, "%c", c);
  }
  
  fclose(input);
  fclose(output);
  return 0;
}
