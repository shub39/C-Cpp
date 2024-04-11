#include<stdio.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%d", &n);
  int arr[n];
  printf("Enter array of size %d: ", n);
  for(int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int rev[n];
  for(int i = 0; i < n; i++) {
    rev[i] = arr[n - i - 1];
  }  
  for(int i = 0; i < n; i++) {
    printf("%d ", rev[i]);
  }
  printf("\n");
  return 0;
}
