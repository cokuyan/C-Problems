#include <stdio.h>

main() {
  int c, blanks;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      blanks = 1;
      continue;
    }
    if (blanks) {
      blanks = 0;
      putchar(' ');
    }
    putchar(c);
  }
}
