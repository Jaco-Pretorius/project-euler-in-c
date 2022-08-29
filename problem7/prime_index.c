#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13. */
/* What is the 10 001st prime number? */

bool is_prime(unsigned int n) {
  unsigned int rounded_square_root = round(sqrt(n));
  for (unsigned int i = 2; i <= rounded_square_root; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

int nth_prime(unsigned int n) {
  int prime_index = 1, current_prime = 2;
  while (prime_index < n) {
    current_prime++;
    if (is_prime(current_prime)) {
      prime_index++;
    }
  }

  return current_prime;
}

int main(void) {
  printf("The 6th prime is %d\n", nth_prime(6));
  printf("The 10_001st prime is %d\n", nth_prime(10001));
}
