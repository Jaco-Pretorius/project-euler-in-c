#include <stdio.h>
#define UPPER_BOUND 4000000

int fibonacci(int n) {
  if (n <= 1) {
    return n + 1;
  } else {
    int a = 1, b = 2, c;

    for (int i = 2; i <= n; i++) {
      c = a + b;
      a = b;
      b = c;
    }

    return c;
  }
}

int main(void) {
  int n = 0, even_valued_sum = 0, current_term;
  do {
    current_term = fibonacci(n++);
    if (current_term % 2 == 0) {
      even_valued_sum += current_term;
    }
  } while (current_term < UPPER_BOUND);

  printf("Sum of even-valued fibonacci terms under %d: %d\n", UPPER_BOUND, even_valued_sum);
}
