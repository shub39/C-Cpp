/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int
 * data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *
 * Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) :
 * data(x), next(next) {}
 * };
 */

int getLength(Node *head) {
  int length = 0;
  while (head != NULL) {
    length++;
    head = head->next;
  }
  return length;
}

Node *kReverse(Node *head, int k) {
  if (head == NULL || head->next == NULL) {
    return head;
  }
  if (getLength(head) < k) {
    return head;
  }

  Node *next = NULL;
  Node *current = head;
  Node *prev = NULL;
  int count = 0;

  while (current != NULL && count < k) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
    count++;
  }

  head->next = kReverse(next, k);

  return prev;
}
