// WAP to evaluate gcd(x,y) using normal function and recursive function.

#include <stdio.h>

int gcdNormal(int x, int y) {
  int temp;
  while (y != 0) {
    temp = y;
    y = x % y;
    x = temp;
  }
  return x;
}

int gcdRecursive(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcdRecursive(b, a % b);
}

int main() {
  int x, y;
  printf("Enter x: \n");
  scanf("%d", &x);
  printf("Enter y: \n");
  scanf("%d", &y);
  int normal = gcdNormal(x, y);
  printf("Normal GCD: %d\n", normal);
  int recursive = gcdRecursive(x, y);
  printf("Recursive GCD: %d\n", recursive);
}
