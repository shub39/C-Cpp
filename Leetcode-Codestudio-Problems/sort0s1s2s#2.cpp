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

void insertAtTail(Node *&tail, Node *curr) {
  tail->next = curr;
  tail = curr;
}

Node *sortList(Node *head) {
  Node *zeroHead = new Node(-1);
  Node *zeroTail = zeroHead;
  Node *oneHead = new Node(-1);
  Node *oneTail = oneHead;
  Node *twoHead = new Node(-1);
  Node *twoTail = twoHead;

  Node *curr = head;

  while (curr != NULL) {

    int value = curr->data;

    if (value == 0) {
      insertAtTail(zeroTail, curr);
    } else if (value == 1) {
      insertAtTail(oneTail, curr);
    } else if (value == 2) {
      insertAtTail(twoTail, curr);
    }
    curr = curr->next;
  }

  if (oneHead->next != NULL) {
    zeroTail->next = oneHead->next;
  } else {
    zeroTail->next = twoHead->next;
  }

  oneTail->next = twoHead->next;
  twoTail->next = NULL;

  head = zeroHead->next;

  delete zeroHead;
  delete oneHead;
  delete twoHead;

  return head;
}
