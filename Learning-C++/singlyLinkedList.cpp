#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
  ~Node() {
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
  }
};

void insertAtTail(Node *&tail, int data) {
  Node *temp = new Node(data);
  tail->next = temp;
  tail = tail->next;
}

void insertAtHead(Node *&head, int data) {
  Node *temp = new Node(data);
  temp->next = head;
  head = temp;
}

void insertAtMiddle(Node *&head, Node *&tail, int position, int data) {
  if (position == 1) {
    insertAtHead(head, data);
    return;
  }
  Node *temp = head;
  int count = 1;
  while (count < position - 1) {
    temp = temp->next;
    count++;
  }
  if (temp->next == NULL) {
    insertAtTail(tail, data);
    return;
  }
  Node *nodeToInsert = new Node(data);
  nodeToInsert->next = temp->next;
  temp->next = nodeToInsert;
}

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void deleteNode(Node *&head, Node *&tail, int position) {
  if (position == 1) {
    Node *temp = head;
    head = head->next;
    temp->next = NULL;
    delete temp;
    return;
  }
  Node *current = head;
  Node *prev = NULL;
  int count = 1;
  while (count < position) {
    prev = current;
    current = current->next;
    count++;
  }
  if (current->next == NULL) {
    tail = prev;
  }
  prev->next = current->next;
  current->next = NULL;
  delete current;
}

int main() {
  Node *node1 = new Node(10);
  Node *head = node1;
  Node *tail = node1;
  print(head);
  insertAtMiddle(head, tail, 1, 12);
  print(head);
  insertAtMiddle(head, tail, 3, 15);
  print(head);
  insertAtMiddle(head, tail, 2, 25);
  print(head);
  deleteNode(head, tail, 1);
  print(head);
  deleteNode(head, tail, 3);
  cout << tail->next << " " << tail->data << endl;
  print(head);
  return 0;
}
