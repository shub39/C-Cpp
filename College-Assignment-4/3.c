// swap two numbers using call by reference and call by value

#include <stdio.h>

void swapByRef(int *a, int *b) {
  int c = *a;
  *a = *b;
  *b = c;
}

int main() {
  int a, b;
  printf("Enter a: \n");
  scanf("%d", &a);
  printf("Enter b: \n");
  scanf("%d", &b);
  swapByRef(&a, &b);
  printf("Swapped a = %d, b = %d\n", a, b);
  return 0;
}
