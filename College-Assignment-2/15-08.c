#include <stdio.h>

int main() {
  int n;
  printf("Enter Number: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++){
    for(int j = 1; j < i + 1; j++){
      printf("5 ");
    }
    printf("\n");
  }
}
/*
5 
5 5 
5 5 5 
5 5 5 5 
*/
