/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *sortList(Node *head) {
  if (head == NULL || head->next == NULL) {
    return NULL;
  }
  int countZero = 0, countOne = 0, countTwo = 0;
  Node *temp = head;
  while (temp != NULL) {
    if (temp->data == 0) {
      countZero++;
    }
    if (temp->data == 1) {
      countOne++;
    }
    if (temp->data == 2) {
      countTwo++;
    }
    temp = temp->next;
  }
  temp = head;
  while (countZero != 0) {
    temp->data = 0;
    temp = temp->next;
    countZero--;
  }
  while (countOne != 0) {
    temp->data = 1;
    temp = temp->next;
    countOne--;
  }
  while (countTwo != 0) {
    temp->data = 2;
    temp = temp->next;
    countTwo--;
  }
  return head;
}
