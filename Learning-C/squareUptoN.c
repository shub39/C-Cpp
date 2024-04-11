#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  int arr[n];
  for(int i = 0; i < n; i++) {
    arr[i] = (i + 1) * (i + 1);
  }
  for(int i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
  return 0;
}
