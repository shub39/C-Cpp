// How can this work if we are not taking care of prev pointers??
/**
 * Definition of doubly linked list:
 * class Node {
 * public:
 *      int data;
 *      Node *prev;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->prev = NULL;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next, Node *prev) {
 *          this->data = data;
 *          this->prev = prev;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/

Node *removeDuplicates(Node *head) {
  if (head == NULL) {
    return NULL;
  }
  Node *temp = head;
  while (temp->next != NULL) {
    if (temp->data == temp->next->data) {
      Node *rep = temp->next->next;
      delete (temp->next);
      temp->next = rep;
    }
    temp = temp->next;
  }
  return head;
}
