#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= i; j++) {
      printf("%d ", j * i);
    }
    printf("\n");
  }
  return 0;
}
/*
0 
0 1 
0 2 4 
0 3 6 9 
0 4 8 12 16 
0 5 10 15 20 25 
0 6 12 18 24 30 36 
*/
