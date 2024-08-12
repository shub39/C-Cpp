// Check if Input is armstrong number or not using funtions
// add -lm to the end of the gcc command to avoid error message
#include <math.h>
#include <stdbool.h>
#include <stdio.h>

int noOfDigits(int n) {
  int ans = 0;
  while (n != 0) {
    n /= 10;
  }
  return ans;
}

bool isArmstorng(int n) {
  int digits = noOfDigits(n);
  int sum = 0;
  int temp = n;
  while (temp != 0) {
    sum = sum + pow((temp % 10), 3);
    temp /= 10;
  }
  if (sum == n) {
    return true;
  }
  return false;
}

int main() {
  int n;
  printf("Enter The Number: ");
  scanf("%d", &n);
  if (isArmstorng(n)) {
    printf("%d is Armstrong Number.\n", n);
  } else {
    printf("%d is not Armstrong Number.\n", n);
  }
  return 0;
}
