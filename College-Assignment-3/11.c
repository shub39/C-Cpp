// WAP where check the properties of Break, Continue and Exit function, where
// also explain their execution behaviour.

#include <stdio.h>
#include <stdlib.h>

int main() {
  // Break statement
  for (int i = 1; i <= 10; i++) {
    if (i == 5) {
      break; // Exit the loop when i is 5
    }
    printf("%d ", i);
  }
  printf("\n");
  // continue statement
  for (int i = 1; i <= 5; i++) {
    if (i % 2 == 0) {
      continue; // Skip even numbers
    }
    printf("%d ", i);
  }
  printf("\n");
  // exit statement
  for (int i = 1; i <= 5; i++) {
    if (i == 3) {
      printf("\n");
      exit(0); // Exit the program when i is 3
    }
    printf("%d ", i);
  }
  return 0;
}
