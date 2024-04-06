#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  int l = 1;
  for(int i = 1; i <= n; i++) {
    if(i != 1) l+=i;
    int k = l;
    for(int j = 0; j < i; j++) {
      printf("%d ", k--);
    }
    printf("\n");
  }
}
/*
1 
3 2 
6 5 4 
10 9 8 7 
*/
