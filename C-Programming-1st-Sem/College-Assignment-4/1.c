// Check if Input is prime or not using funtions
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

int main() {
  int n;
  printf("Enter The Number: ");
  scanf("%d", &n);
  if (isPrime(n)) {
    printf("%d is prime.\n", n);
  } else {
    printf("%d is not prime.\n", n);
  }
  return 0;
}
