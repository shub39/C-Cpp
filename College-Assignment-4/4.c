// Check if a given Number is pallindrome or not using funtions

#include <stdio.h>
#include <stdbool.h>

bool checkPallindrome(int a) {
  int temp = a;
  int rev = 0;
  while (temp != 0) {
    rev = (rev * 10) +(temp % 10);
    temp/= 10;
  }
  if (rev == a) {
    return true;
  } 
  return false;
}

int main() {
  int n;
  printf("Enter Number: \n");
  scanf("%d", &n);
  if (checkPallindrome(n)) {
    printf("%d is a pallindrome\n", n);
  } else {
    printf("%d is not a pallindrome\n", n);
  }
}
