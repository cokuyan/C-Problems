#include <stdio.h>

#define MAX_LENGTH 1000

void expand(char s1[], char s2[]);

main() {
  char copied[MAX_LENGTH];
  expand("a-z", copied);
  printf("%s\n", copied);
  expand("a-b-c", copied);
  printf("%s\n", copied);
  expand("a-z0-9", copied);
  printf("%s\n", copied);
  expand("-a-z", copied);
  printf("%s\n", copied);
}

void expand(char s1[], char s2[]) {
  int i, j;
  char c;

  for (i = 0, j = 0; s1[i] != '\0' && j < MAX_LENGTH-1; i++, j++) {
    if (s1[i] == '-' && i > 0 && s1[i+1] != '\0') {
      i++;
      for (c = s1[i-2]+1; c != s1[i]; c++)
        s2[j++] = c;
      s2[j] = c;
    }
    else
      s2[j] = s1[i];
  }
  s2[j] = '\0';
}
