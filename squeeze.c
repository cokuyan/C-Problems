#include <stdio.h>

void squeeze_char(char s[], int c);
void squeeze(char s[], char t[]);

main() {
  char s[] = "interesting";
  char t[] = "test";

  squeeze(s, t);
  printf("%s\n", s);
}

void squeeze_char(char s[], int c) {
  int i, j;

  for (i = j = 0; s[i] != '\0'; i++)
    if (s[i] != c)
      s[j++] = s[i];
  s[j] = '\0';
}

void squeeze(char s[], char t[]) {
  int i;

  for (i = 0; t[i] != '\0'; i++)
    squeeze_char(s, t[i]);
}
