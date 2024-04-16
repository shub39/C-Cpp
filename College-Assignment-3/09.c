// WAP to evaluate gcd(x,y).

#include <stdio.h>

int gcd(int x, int y);

int main() {
  int x, y;

  printf("Enter two integers: ");
  scanf("%d %d", &x, &y);

  printf("GCD of %d and %d is %d\n", x, y, gcd(x, y));

  return 0;
}

int gcd(int x, int y) {
  int temp;
  while (y != 0) {
    temp = y;
    y = x % y;
    x = temp;
  }
  return x;
}
