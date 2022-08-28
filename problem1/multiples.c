#include <stdio.h>
#define UPPER_BOUND 1000

int main(void) {
  int sum = 0;
  for (int i = 0; i < UPPER_BOUND; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
      sum += i;
    }
  }
  printf("The sum of all multiples of 3 or 5 below %d is: %d\n", UPPER_BOUND, sum);
}
