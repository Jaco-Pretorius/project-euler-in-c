#include <stdio.h>
#include <math.h>
#include <stdbool.h>

/* The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. */
/* Find the sum of all the primes below two million. */

bool is_prime(int n) {
  int rounded_square_root = round(sqrt(n));
  for (int i = 2; i <= rounded_square_root; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

long sum_of_primes(int upper_bound) {
  long sum = 0;
  for (int i = 2; i < upper_bound; i++) {
    if (is_prime(i)) {
      sum += i;
    }
  }
  return sum;
}

int main(void) {
  printf("Sum of primes below %d is %ld\n", 10, sum_of_primes(10));
  printf("Sum of primes below %d is %ld\n", 2000000, sum_of_primes(2000000));
}
