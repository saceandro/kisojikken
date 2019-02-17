#include <stdio.h>

int main() {
  char s[100] = "";
  
  scanf("%99s", s);
  
  if (*s=='y' && *(s+1)=='e' && *(s+2)=='s' && *(s+3)=='\0')
  //  if (s[0]=='y' && s[1]=='e' && s[2]=='s' && s[3]=='\0')
    puts("OK!");
  else
    puts("NG!");
  
  return 0;
}
