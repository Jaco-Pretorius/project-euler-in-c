#include <stdio.h>
#include <stdbool.h>
#include <math.h>

#define SQUARE(x) ((x) * (x))

typedef struct {
  int a, b, c;
} TRIPLET;

double calculate_c(int a, int b) {
  return sqrt(SQUARE(a) + SQUARE(b));
}

int sum_of_triplet(int a, int b) {
  return a + b + calculate_c(a, b);
}

bool is_pythagorean(int a, int b) {
  double c = calculate_c(a, b);
  return round(c) == c;
}

TRIPLET find_triplet(int sum) {
  int a = 1, b = 2;
  while (1) {
    if (is_pythagorean(a, b) && sum_of_triplet(a, b) == sum) {
      TRIPLET result = { a, b, calculate_c(a, b) };
      return result;
    }

    if (b == 1000) {
      b = a++ + 1;
    } else {
      b++;
    }

    if (a == 1000) {
      TRIPLET result = { a, b, calculate_c(a, b) };
      return result;
    }
  }
}

int main(void) {
  TRIPLET result = find_triplet(1000);
  printf("%d squared + %d squared = %d squared. The sum of which is %d\n", result.a, result.b, result.c, 1000);
  printf("The product of which is %d\n", result.a * result.b * result.c);
}
