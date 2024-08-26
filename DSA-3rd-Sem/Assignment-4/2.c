/*
 * Detective Arjun was well-known in his village for his sharp mind and quick
thinking. One sunny morning, he received a call from the local jeweler, Mr.
Gupta. Mr. Gupta had discovered two identical-looking jewel boxes, each
containing a collection of precious gems. The legend said that only if both
collections of gems were exactly the same, could the box with the true hidden
gem be opened. To solve this mystery, Detective Arjun needed to verify that both
collections had the same set of gems. The order of gems didn’t matter, but if a
gem appeared more than once, it had to appear the same number of times in both
boxes. Can you help Detective Arjun determine if the collections in the two
boxes are equal?
*/

#include <stdio.h>

int main() {
  // initialisation
  int n;
  printf("Enter no. of Jewels in a box: ");
  scanf("%d", &n);
  int box1[n];
  int box2[n];

  // Getting the jewels (integers)
  printf("Enter %d Jewels for box 1: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &box1[i]);
  }
  printf("Enter %d Jewels for box 2: ", n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &box2[i]);
  }

  // Comparing the boxes
  for (int i = 0; i < n; i++) {
    int current = box1[i];
    for (int j = 0; j < n; j++) {
      if (box2[j] == current) {
        box2[j] = 0;
        break;
      }
    }
  }

  // Checking if equal
  for (int i = 0; i < n; i++) {
    if (box2[i] != 0) {
      printf("Jewels are not the same!!\n");
      return 0;
    }
  }

  printf("Jewels are the same! Treasure Unlocked.\n");
  return 0;
}

// THEY SHOULD HAVE MENTIONED THAT JEWELS MEAN INTEGERS WIYEGYUCDHVDHSYDVHCVHDS!!
