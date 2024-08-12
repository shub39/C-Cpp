#include<stdio.h>

int main(){
  int n, m;
  printf("Enter Length: ");
  scanf("%d", &n);
  printf("Enter Breadth: ");
  scanf("%d", &m);
  for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++) printf("* ");
    printf("\n");
  }
}
