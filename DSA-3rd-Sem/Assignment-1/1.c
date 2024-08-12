/*
 * Once upon a time, in the kingdom of Numeria, there was a legend about three
hidden treasures that could make one the most powerful ruler of the land. These
treasures were unique and distinct, each guarded by a different dragon. The
king, eager to secure his legacy, sent out his bravest knight, Sir Num, on a
quest to find these treasures. Sir Num embarked on his journey, collecting
valuable gems along the way. Each gem had a magical number associated with it.
Sir Num’s challenge was to identify the gems that represented the top three
distinct maximum numbers, in order to unlock the treasure chests. If there were
fewer than three distinct numbers, he could only unlock as many chests as there
were distinct numbers. Can you help Sir Num find the third greatest treasure? If
not, return the highest treasure he can find.
*/

#include <stdio.h>

int main() {
  int arr[3];
  int max = 0;

  // Taking The treasures
  printf("Enter The three treasures (Integers)\n");
  for (int i = 0; i < 3; i++) {
    scanf("%d", &arr[i]);
  }

  // Finding Greatest treasure
  for (int i = 0; i < 3; i++) {
    if (arr[i] > max) max = arr[i];
  }

  // Check if third greatest treasure is possible or not
  if (arr[0] == arr[1] || arr[1] == arr[2] || arr[0] == arr[2]) {
    printf("%d is the greatest treasure.\n", max);
    return 0;
  }

  // Find the third greatest treasure
  for (int i = 0; i < 3; i++) {
    if (arr[i] < max) max = arr[i];
  }

  printf("%d is the Third Greatest Treasure\n", max);
  return 0;
}

// TBH this question is stupid, it doesnt make any sense wtf lmao stop this pls
