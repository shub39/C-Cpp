// WAP to evaluate power(x,y) using normal function and recursive function.

#include <stdio.h>

int power(int a, int b) {
  if (b == 0)
    return 1;
  if (b == 1)
    return a;
  int ans = power(a, b / 2);
  if (b % 2 == 0)
    return ans * ans;
  return a * ans * ans;
}

int main() {
  int a, b;
  printf("Enter a: ");
  scanf("%d", &a);
  printf("Enter b: ");
  scanf("%d", &b);
  int ans = power(a, b);
  printf("%d\n", ans);
  return 0;
}
