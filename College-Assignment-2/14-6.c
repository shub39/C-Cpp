#include<stdio.h>

int main() {
  int n;
  printf("Enter Number: ");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++){
    for (int j = 1; j <= i; j++) printf("* ");
    for (int j = 0; j < (2 * n) - (2 * i); j++) printf("  ");
    for (int j = 1; j <= i; j++) printf("* ");
    printf("\n");
  }
  return 0;
}
