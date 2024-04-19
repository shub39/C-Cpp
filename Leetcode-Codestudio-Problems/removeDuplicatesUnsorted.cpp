#include <bits/stdc++.h>
/****************************************************************
    Following is the class structure of the Node class:
    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };
*****************************************************************/

Node *removeDuplicates(Node *head) {
  if (head == NULL) {
    return NULL;
  }
  unordered_map<int, bool> visited;
  Node *curr = head;
  Node *temp = NULL;
  Node *prev = NULL;
  while (curr != NULL) {
    if (visited[curr->data]) {
      temp = curr;
      prev->next = curr->next;
      curr = curr->next;
      delete temp;
    } else {
      visited[curr->data] = true;
      prev = curr;
      curr = curr->next;
    }
  }
  return head;
}
