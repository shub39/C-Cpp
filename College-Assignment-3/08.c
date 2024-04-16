// WAP to evaluate the series upto nth term
// 1 + 1/2^2 - 1/3^3 + 1/4^4 - 1/5^5 ... + 1/n^n

#include <math.h>
#include <stdio.h>

int main() {
  int n, i;
  double sum = 0.0;

  printf("Enter the value of n: ");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {
    if (i % 2 == 0) {
      sum -= 1.0 / pow(i, i);
    } else {
      sum += 1.0 / pow(i, i);
    }
  }

  printf("The sum of the series up to %d terms is: %lf\n", n, sum);

  return 0;
}
