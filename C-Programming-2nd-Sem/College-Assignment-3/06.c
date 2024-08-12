// WAP to print the Fibonacci series upto nth term.

#include <stdio.h>

int main() {
  int n, i, term1 = 0, term2 = 1, nextTerm;

  printf("Enter the number of terms: ");
  scanf("%d", &n);

  printf("Fibonacci Series up to %d terms: \n", n);

  for (i = 1; i <= n; ++i) {
    printf("%d, ", term1);
    nextTerm = term1 + term2;
    term1 = term2;
    term2 = nextTerm;
  }
  printf("\n");

  return 0;
}
