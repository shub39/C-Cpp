/*
 * Ankit found an old diary in his grandmother’s attic. The diary had a list of
his grand- mother’s childhood friends written in a special way. It was written
in a single row, like a string of names joined together. Ankit noticed something
interesting about the list. When he read the list from the start to the end, it
looked the same as when he read it from the end to the start. Ankit wanted to
check if this was true for all the lists in the diary. So, he wrote a program to
help him. The program checks if the list of names is a palindrome or not.
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

// Function to check if a string is a palindrome
int isPalindrome(const char str[]) {
  int left = 0;
  int right = strlen(str) - 1;
  while (left < right) {
    while (left < right && !isalnum(str[left])) {
      left++;
    }
    while (left < right && !isalnum(str[right])) {
      right--;
    }
    if (tolower(str[left]) != tolower(str[right])) {
      return 0;
    }
    left++;
    right--;
  }
  return 1;
}

int main() {
  // All the dead friends of the dead granny 
  const char *list_of_names[] = {"abba", "passap", "op"};
  int num_strings = sizeof(list_of_names) / sizeof(list_of_names[0]);

  // Checking each name for dramatic effect
  for (int i = 0; i < num_strings; i++) {
    if (!isPalindrome(list_of_names[i])) {
      printf("The list of names is not a palindrome :'<\n");
      return 0;
    }
  }

  printf("The List of names is a pallindrome. ;)\n");
  return 0;
}

// This is so random. Ankit's grandmotha was maybe not so nice 💯
