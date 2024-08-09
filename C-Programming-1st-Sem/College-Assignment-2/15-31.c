#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  for(int i = n; i > 0; i--) {
    int star = i - 1;
    for(int j = 1; j <= i; j++) {
      printf("%d ", j);
      if(star > 0) {
        printf("* ");
        star--;
      }
    }
    printf("\n");
  }
  return 0;
}
/*
1 * 2 * 3 * 4 
1 * 2 * 3 
1 * 2 
1 
*/
