#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int lim);
void reverse(char s[], int len);

main() {
  int len;
  char line[MAXLINE];

  while ((len = get_line(line, MAXLINE)) != 0) {
    reverse(line, len - 1);
    printf("%s", line);
  }
  return 0;
}

int get_line(char s[], int lim) {
  int c, i;

  for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    s[i] = c;
  if (c == '\n') {
    s[i] = c;
    i++;
  }
  s[i] = '\0';
  return i;
}

void reverse(char s[], int len) {
  int i;
  char temp;

  for (i = 0; i < len / 2; i++) {
    temp = s[i];
    s[i] = s[len - i - 1];
    s[len - i - 1] = temp;
  }
}

