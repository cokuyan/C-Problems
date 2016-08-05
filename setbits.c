#include <stdio.h>

unsigned setbits(unsigned x, int p, int n, unsigned y);

main() {
  printf("43 :: %d\n", setbits(077u, 5, 4, 065u));
}

unsigned setbits(unsigned x, int p, int n, unsigned y) {
  return (x & ~(((1 << n)-1)<<(p-n)) | (y & ((1<<n)-1))<<(p-n));
}
