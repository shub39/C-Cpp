#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  int m = 1;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 2 * i - 1; j++) {
      printf("%d ", m++);
    }
    printf("\n");
  }
  return 0;
}
/*
1 
2 3 4 
5 6 7 8 9 
*/
