#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) printf("%d ", i);
    for(int j = i + 1; j <= n; j++) printf("%d ", j);
    printf("\n");
  }
}
/*
1 2 3 4 5 
2 2 3 4 5 
3 3 3 4 5 
4 4 4 4 5 
5 5 5 5 5 
*/
