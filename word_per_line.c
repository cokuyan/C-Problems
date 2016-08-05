#include <stdio.h>

#define IN  1
#define OUT 0
main() {
  int status, c;

  while ((c = getchar()) != EOF) {
    if ((c == ' ' || c == '\n' || c == '\t') && status == IN) {
      status = OUT;
      putchar('\n');
    } else if (c != ' ' && c != '\n' && c != '\t') {
      status = IN;
      putchar(c);
    }
  }
}
