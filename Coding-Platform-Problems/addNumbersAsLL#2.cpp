class Solution {
private:
  Node *reverseLinkedList(Node *head) {
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

  void insertAtTail(Node *&head, Node *&tail, int val) {
    Node *temp = new Node(val);

    if (head == NULL) {
      head = temp;
      tail = temp;
      return;
    } else {
      tail->next = temp;
      tail = temp;
    }
  }

  Node *add(Node *first, Node *second) {
    int carry = 0;
    int sum = 0;
    int digit = 0;
    Node *ansHead = NULL;
    Node *ansTail = NULL;

    while (first != NULL || second != NULL || carry != 0) {
      int value1 = 0, value2 = 0;
      if (first != NULL)
        value1 = first->data;

      if (second != NULL)
        value2 = second->data;

      sum = carry + value1 + value2;
      digit = sum % 10;
      insertAtTail(ansHead, ansTail, digit);
      carry = sum / 10;

      if (first != NULL)
        first = first->next;

      if (second != NULL)
        second = second->next;
    }

    return ansHead;
  }

public:
  struct Node *addTwoLists(struct Node *num1, struct Node *num2) {

    Node *first = reverseLinkedList(num1);
    Node *second = reverseLinkedList(num2);

    Node *ans = add(first, second);

    ans = reverseLinkedList(ans);

    while (ans->data == 0 && ans->next != NULL) {
      ans = ans->next;
    }

    return ans;
  }
};
