#include<stdio.h>

int main () {
  char name[50];
  printf("Enter Your name: ");
  scanf("%49s", name);
  printf("Hello! %s\n", name);
  return 0;
}
