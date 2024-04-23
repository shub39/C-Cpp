// Not working will look into it later.
#include <bits/stdc++.h>
/*************************************************
        Following is the structure of class Node:

        class Node{
        public:
            int data;
            Node* next;

            Node(int data){
                this->data = data;
                this->next = NULL;
            }

        }
**************************************************/

bool isCircular(Node *head) {
  if (head == NULL) {
    return false;
  }
  Node *temp = head->next;
  while (temp != NULL || temp != head) {
    temp = temp->next;
  }
  if (temp == head) {
    return true;
  }
  return false;
}
