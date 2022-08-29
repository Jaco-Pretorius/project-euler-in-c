#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_palindrome_number(int n) {
  int copy = n, reversed_n = 0, power = 1;
  while (copy > 0) {
    reversed_n = (reversed_n * 10) + (copy % 10);
    copy /= 10;
  }

  while (n > 0) {
    if ((n % 10) != (reversed_n % 10)) {
      return false;
    }
    n /= 10;
    reversed_n /= 10;
  }

  return true;
}

int largest_palindrome_product(short digits) {
  int lower_bound, upper_bound, current_max = 0;
  lower_bound = pow(10, digits - 1);
  upper_bound = pow(10, digits);

  for (int i = upper_bound - 1; i >= lower_bound; i--) {
    for (int j = upper_bound - 1; j >= lower_bound; j--) {
      int product = i * j;
      if (is_palindrome_number(product) && (product > current_max)) {
        current_max = product;
      }
    }
  }

  return current_max;
}

int main(void) {
  printf("Largest palindrome made from the product of %d digits: %d\n", 2, largest_palindrome_product(2));
  printf("Largest palindrome made from the product of %d digits: %d\n", 3, largest_palindrome_product(3));
}
