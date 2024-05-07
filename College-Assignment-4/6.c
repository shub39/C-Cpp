// WAP to print the Fibonacci series upto nth term using normal function and recursive function

#include<stdio.h>

int fibonacci(int n) {
  if(n <= 2) {
    return 1;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
  int n;
  printf("Enter n: ");
  scanf("%d", &n);
  for(int i = 1; i <= n; i++) printf("%d ", fibonacci(i));
  printf("\n");
  return 0;
}
