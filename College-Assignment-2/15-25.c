#include<stdio.h>

int main() {
  char n[] = "Python";
  for(int i = 0; i < 6; i++) {
    for (int j = 0; j <= i; j++) printf("%c ", n[j]);
    printf("\n");
  }
}
/*
P 
P y 
P y t 
P y t h 
P y t h o 
P y t h o n 
*/
