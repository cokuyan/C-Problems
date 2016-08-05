#include <stdio.h>
#include <string.h>

int htoi(char s[]);

main() {
  int i;

  i = htoi("0x123");

  printf("%d\n", i);

  i = htoi("FF");

  printf("%d\n", i);
}

int htoi(char s[]) {
  int len;
  int i;
  int n;

  n = 0;
  len = strlen(s);
  for (i = 0; i < len; i++) {
    if (i == 0 && s[i] == '0' && (s[i+1] == 'x' || s[i+1] == 'X'))
      continue;
    if (s[i] == 'x' || s[i] == 'X')
      continue;
    switch(s[i]) {
      case 'F' :
      case 'f' :
        n = n * 16 + 15;
        break;
      case 'E' :
      case 'e' :
        n = n * 16 + 14;
        break;
      case 'D' :
      case 'd' :
        n = n * 16 + 13;
      case 'C' :
      case 'c' :
        n = n * 16 + 12;
      case 'b' :
      case 'B' :
        n = n * 16 + 11;
      case 'a' :
      case 'A' :
        n = n * 16 + 10;
      default :
        n = n * 16 + (s[i] - '0');
    }
  }
  return n;
}
