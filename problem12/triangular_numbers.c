#include <stdio.h>
#include <stdlib.h>
#include <math.h>

long numberOfDividers(long n) {
  long result = 0;
  for (long i = 1; i <= sqrt(n); i++) {
    if (n % i == 0) {
      result++;
      if (n / i != i) {
        result++;
      }
    }
  }
  return result;
}

long firstTriangleNumber(long searchForNumberOfDividers) {
  long triangleNumber = 1, triangleNumberIndex = 1;

  while (1) {
    long num = numberOfDividers(triangleNumber);
    if (num >= searchForNumberOfDividers) {
      return triangleNumber;
    } else {
      triangleNumberIndex++;
      triangleNumber += triangleNumberIndex;
    }
  }
}

int main(void) {
  printf("First triangle number with more than 5 dividers is: %ld\n", firstTriangleNumber(5));
  printf("First triangle number with more than 500 dividers is: %ld\n", firstTriangleNumber(500));
}
