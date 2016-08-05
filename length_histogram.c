#include <stdio.h>

#define IN  1
#define OUT 0

main() {
  int word_lens[100];
  int c, cur_len, status, i, longest;
  
  for (i = 0; i < 100; i++)
    word_lens[i] = 0;
  longest = cur_len = 0;
  status = OUT;
  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      if (status == IN) {
        ++word_lens[cur_len];
        if (cur_len > longest)
          longest = cur_len;
        cur_len = 0;
        status = OUT;
      }
    } else {
      cur_len++;
      status = IN;
    }
  }
  for (i = 1; i <= longest; i++) {
    printf("%d:", i); 
    while (word_lens[i] > 0) {
      putchar('=');
      word_lens[i]--;
    }
    putchar('\n');
  } 
}

