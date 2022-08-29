#include <stdio.h>
#include <stdbool.h>

/* 2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder. */
/* What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20? */

bool is_evenly_divisible(int n, int max_divider) {
  for (int i = 2; i <= max_divider; i++) {
    if (n % i != 0) {
      return false;
    }
  }

  return true;
}

int find_smallest(int max_divider) {
  int i = max_divider * 2;
  while (1) {
    if (!is_evenly_divisible(i, max_divider)) {
      i++;
    } else {
      return i;
    }
  }
}

int main(void) {
  printf("Smallest number that is evenly divisible by all numbers from 1 through %d: %d\n", 10, find_smallest(10));
  printf("Smallest number that is evenly divisible by all numbers from 1 through %d: %d\n", 20, find_smallest(20));
}
