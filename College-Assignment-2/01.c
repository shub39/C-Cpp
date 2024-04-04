// 1. WAP to check whether a number is odd or even
#include<stdio.h>

int main(){
  int n;
  printf("Enter Number: ");
  scanf("%d", &n);
  if (n % 2 == 0) {
    printf("Even Number\n");
    return 0;
  }
  printf("Odd Number\n");
  return 0;
}
