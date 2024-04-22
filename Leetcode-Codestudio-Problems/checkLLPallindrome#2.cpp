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
private:
  Node *getMid(Node *head) {
    Node *slow = head;
    Node *fast = head->next;
    while (fast != NULL && fast->next != NULL) {
      fast = fast->next->next;
      slow = slow->next;
    }
    return slow;
  }
  Node *reverse(Node *head) {
    Node *current = head;
    Node *prev = NULL;
    Node *next = NULL;
    while (current != NULL) {
      next = current->next;
      current->next = prev;
      prev = current;
      current = next;
    }
    return prev;
  }

public:
  bool isPalindrome(Node *head) {
    if (head->next == NULL) {
      return true;
    }
    Node *mid = getMid(head);
    Node *temp = mid->next;
    mid->next = reverse(temp);
    Node *head1 = head;
    Node *head2 = mid->next;
    while (head2 != NULL) {
      if (head1->data != head2->data) {
        return false;
      }
      head1 = head1->next;
      head2 = head2->next;
    }
    return true;
  }
};
