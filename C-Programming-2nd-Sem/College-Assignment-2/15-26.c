#include<stdio.h>

int power(int a, int b){
  if (b == 0) return 1;
  if (b == 1) return a;
  int ans = power(a, b/2);
  if (b % 2 == 0) return ans * ans;
  return a * ans * ans;
}

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  for(int i = 0; i < n; i++) {
    for(int j = i; j >= 0; j--) {
      printf("%d ", power(2,j));
    }
    printf("\n");
  }
  return 0;
}
/*
1 
2 1 
4 2 1 
8 4 2 1 
16 8 4 2 1 
32 16 8 4 2 1 
64 32 16 8 4 2 1 
128 64 32 16 8 4 2 1 
*/
