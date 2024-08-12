// WAP to convert a decimal number into binary.

#include <stdio.h>

int main() {
  int n, binary[32], i = 0;

  printf("Enter a decimal number: ");
  scanf("%d", &n);

  printf("Binary equivalent: ");

  while (n > 0) {
    binary[i] = n % 2;
    n /= 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--) {
    printf("%d", binary[j]);
  }

  printf("\n");

  return 0;
}
