#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) {
    for(int j = 1; j <= i; j++) printf("* ");
    printf("\n");
  }
  printf("\n");
  for(int i = 0; i < n; i++) {
    for(int j = n - i; j >= 1; j--) printf("* ");
    printf("\n");
  }
}
/*
* 
* * 
* * * 
* * * * 
* * * * * 
* * * * * * 

* * * * * * 
* * * * * 
* * * * 
* * * 
* * 
* 
*/
