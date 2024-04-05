#include<stdio.h>

int main() {

  int a, b;
  printf("Enter First Number: ");
  scanf("%d", &a);
  printf("Enter Second Number: ");
  scanf("%d", &b);

  printf("Quotient of Division: %d\n", a / b);
  printf("Remainder of Division: %d\n", a % b);
  return 0;
}
