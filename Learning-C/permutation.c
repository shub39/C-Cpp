#include<stdio.h>

int fact(int n) {
  int ans = 1;
  for(int i = 1; i <= n; i++) {
    ans *= i;
  }
  return ans;
}

int npr(int n, int r) {
  return fact(n) / fact(n - r);
}

int main() {
  int n, r;
  printf("Enter n: ");
  scanf("%d", &n);
  printf("Enter r: ");
  scanf("%d", &r);
  int ans = npr(n, r);
  printf("%d is the number of permutations\n", ans);
  return 0;
}
