#include <bits/stdc++.h>

/************************************************************

    Following is the linked list node structure.

    template <typename T>
    class Node {
        public:
        T data;
        Node* next;

        Node(T data) {
            next = NULL;
            this->data = data;
        }

        ~Node() {
            if (next != NULL) {
                delete next;
            }
        }
    };

************************************************************/

Node<int> *solve(Node<int> *first, Node<int> *second) {
  Node<int> *current1 = first;
  Node<int> *next1 = current1->next;
  Node<int> *current2 = second;
  Node<int> *next2 = current2->next;

  if (first->next == NULL) {
    first->next = second;
    return first;
  }

  while (next1 != NULL && current2 != NULL) {
    int c1data = current1->data;
    int c2data = current2->data;
    int n1data = next1->data;

    if (c2data >= c1data && c2data <= n1data) {
      current1->next = current2;
      next2 = current2->next;
      current2->next = next1;
      current1 = current2;
      current2 = next2;
    } else {
      current1 = next1;
      next1 = next1->next;

      if (next1 == NULL) {
        current1->next = current2;
        return first;
      }
    }
  }

  return first;
}
Node<int> *sortTwoLists(Node<int> *first, Node<int> *second) {
  if (first == NULL)
    return second;
  if (second == NULL)
    return first;

  if (first->data <= second->data)
    return solve(first, second);
  else
    return solve(second, first);
}
