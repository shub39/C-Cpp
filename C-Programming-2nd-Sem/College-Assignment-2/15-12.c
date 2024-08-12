#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  for(int i = n; i > 0; i--) {
    int k = i;
    for(int j = i; j > 0; j--) {
      printf("%d ", k--);
    }
    printf("\n");
  }
}
/*
5 4 3 2 1 
4 3 2 1 
3 2 1 
2 1 
1 
*/
