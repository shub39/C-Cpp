#include<stdio.h>

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    int k = i;
    for (int j = i; j > 0; j--) {
      printf("%d ", k--);
    }
    printf("\n");
  }
}
/*
1 
2 1 
3 2 1 
4 3 2 1 
5 4 3 2 1 
*/
