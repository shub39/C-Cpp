// WAP to convert a decimal number into binary using normal function and
// recursive function.

#include <stdio.h>

void convertNormal(int n) {
  if (n == 0) {
    printf("0");
    return;
  }
  int arr[32];
  int i = 0;
  while (n != 0) {
    arr[i++] = n % 2;
    n /= 2;
  }
  for (int j = i - 1; j >= 0; j--) {
    printf("%d", arr[j]);
  }
}

void convertRecursive(int n) {
  if (n == 0) {
    return;
  } else {
    convertRecursive(n / 2);
    printf("%d", n % 2);
  }
}

int main() {
  int n;
  printf("Enter Number: \n");
  scanf("%d", &n);
  convertNormal(n);
  printf("\n");
  convertRecursive(n);
  printf("\n");
  return 0;
}
