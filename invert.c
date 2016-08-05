#include <stdio.h>

unsigned invert(unsigned x, int p, int n);

main() {
  printf("invert 017 = %d\n", invert(017u, 3, 2));
}

unsigned invert(unsigned x, int p, int n) {
  return (x ^ ((1 << n)-1<<(p-n)));
}
