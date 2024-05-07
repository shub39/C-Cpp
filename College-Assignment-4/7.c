// WAP to print all the prime numbers from the range 1 to n using function.

#include <stdbool.h>
#include <stdio.h>

bool isPrime(int n) {
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}

void printPrime(int n) {
  for (int i = 1; i <= n; i++) {
    if (isPrime(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");
}
 int main() {
  int n;
  printf("Enter N: \n");
  scanf("%d", &n);
  printPrime(n);
  return 0;
}
