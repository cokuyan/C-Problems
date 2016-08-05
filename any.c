#include <stdio.h>

int any(char s[], char t[]);

main() {
  int i;

  i = any("abcdef", "cdef");
  printf("2 == %d\n", i);

  i = any("ienfj", "dwwwe");
  printf("1 == %d\n", i);

  i = any("tcfg", "oimjo");
  printf("-1 == %d\n", i);
}

int any(char s[], char t[]) {
  int i, j;

  for (i = 0; s[i] != '\0'; i++)
    for (j = 0; t[j] != '\0'; j++)
      if (s[i] == t[j])
        return i;

  return -1;
}
