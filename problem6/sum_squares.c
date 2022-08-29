#include <stdio.h>
#include <math.h>

int sum_of_squares(int n) {
  int sum = 1;
  for (int i = 2; i <= n; i++) {
    sum += pow(i, 2);
  }
  return sum;
}

int square_of_sum(int n) {
  int sum = 1;
  for (int i = 2; i <= n; i++) {
    sum += i;
  }
  return pow(sum, 2);
}

int sum_square_difference(int n) {
  return square_of_sum(n) - sum_of_squares(n);
}

int main(void) {
  printf("Sum square difference, first 10 numbers: %d\n", sum_square_difference(10));
  printf("Sum square difference, first 100 numbers: %d\n", sum_square_difference(100));
}
