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

void insertNode(Node *&tail, int element, int data) {
  if (tail == NULL) {
    Node *temp = new Node(data);
    tail = temp;
    temp->next = temp;
    return;
  }
  Node *current = tail;
  while (current->data != element) {
    current = current->next;
  }
  Node *temp = new Node(data);
  temp->next = current->next;
  current->next = temp;
}

void print(Node *&tail) {
  if (tail == NULL) {
    cout << "Nothing to print" << endl;
    return;
  }
  Node *temp = tail;
  do {
    cout << tail->data << " ";
    tail = tail->next;
  } while (tail != temp);
  cout << endl;
}

void deleteNode(Node *&tail, int element) {
  if (tail == NULL) {
    cout << "Nothing to delete." << endl;
    return;
  }
  Node *prev = tail;
  Node *current = prev->next;
  while (current->data != element) {
    prev = current;
    current = current->next;
  }
  prev->next = current->next;
  if (current == prev) {
    tail = NULL;
  }
  if (tail == current) {
    tail = prev;
  }
  current->next = NULL;
  delete current;
}

int main() {
  Node *tail = NULL;

  insertNode(tail, 0, 30);
  print(tail);

  insertNode(tail, 30, 8);
  print(tail);

  insertNode(tail, 8, 2);
  print(tail);

  insertNode(tail, 2, 20);
  print(tail);

  deleteNode(tail, 2);
  print(tail);
  return 0;
}
