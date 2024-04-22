/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
public:
#include <vector>
  bool checkPallindrome(vector<int> arr, int end, int start = 0) {
    if (start > end)
      return true;
    if (a[start++] != a[end--])
      return false;
    return checkPallindrome(a, end, start);
  } // Function to check whether the list is palindrome.
  bool isPalindrome(Node *head) {
    vector<int> arr;
    Node *temp = head;
    while (temp != NULL) {
      arr.push_back(temp->data);
      temp = temp->next;
    }
    return checkPallindrome(arr, arr.size() - 1);
  }
};
