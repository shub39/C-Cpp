// WAP to calculate the factorial of a given number using normal function and recursive function.

#include <stdio.h>

int factorial(int n) {
  if (n == 0) {
    return 1;
  }
  return n * factorial(n - 1);
}

int main() {
  int n;
  printf("Enter Number: \n");
  scanf("%d", &n);
  int ans = factorial(n);
  printf("%d\n", ans);
  return 0;
}
