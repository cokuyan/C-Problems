#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

float convert(float fahr);

main() {
  float fahr;

  printf("Fahr  Celsius\n");
  printf("-------------\n");
  for(fahr = UPPER; fahr >= LOWER; fahr -= STEP) 
    printf("%3.0f %6.1f\n", fahr, convert(fahr)); 
}

float convert(float fahr) {
  return ((5.0 / 9.0) * (fahr - 32.0));
}
