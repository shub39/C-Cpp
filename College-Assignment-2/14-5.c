#include<stdio.h>

int main() {
  int n;
  printf("Enter Number: ");
  scanf("%d", &n);
  int ascii_value = 65;
  for (int i = 0; i < n; i++){
    int temp_value = ascii_value;
    for (int j = 1; j <= i + 1; j++){
      printf("%c ", temp_value++);
    }
    ascii_value++;
    printf("\n");
  }
  return 0;
}
