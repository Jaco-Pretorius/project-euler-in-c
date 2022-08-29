#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* The prime factors of 13195 are 5, 7, 13 and 29. */
/* What is the largest prime factor of the number 600851475143 ? */

bool is_prime(unsigned long n) {
  unsigned long rounded_square_root = round(sqrt(n));
  for (unsigned long i = 2; i <= rounded_square_root; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

unsigned long largest_prime_factor(unsigned long n) {
  unsigned long rounded_square_root = round(sqrt(n));
  for (unsigned long i = rounded_square_root; i >= 1; i--) {
    if ((n % i == 0) && is_prime(i)) {
      return i;
    }
  }

  return -1;
}

int main(void) {
  printf("The largest prime factor of 13195 is %lu\n", largest_prime_factor(13195));
  printf("The largest prime factor of 600851475143 is %lu\n", largest_prime_factor(600851475143));
}
