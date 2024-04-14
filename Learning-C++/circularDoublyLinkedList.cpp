#include <iostream>
using namespace std;

class Node {
public:
  int data;
  Node *next;
  Node *prev;

  Node(int data) {
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }
  ~Node() {
    if (this->next != NULL || this->prev != NULL) {
      delete next;
      delete prev;
      this->prev = NULL;
      this->next = NULL;
    }
  }
};

void insertNode(Node *&tail, int data, int element) {
  if (tail == NULL) {
    Node *temp = new Node(data);
    temp->prev = temp;
    temp->next = temp;
    tail = temp;
    return;
  }
  Node *temp = tail;
  while (temp->data != element) {
    temp = temp->next;
  }
  Node *toAdd = new Node(data);
  toAdd->next = temp;
  toAdd->prev = temp->prev;
  toAdd->prev->next = toAdd;
  temp->prev = toAdd;
  tail = toAdd;
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
  Node *temp = tail;
  while (temp->data != element) {
    temp = temp->next;
  }
  temp->next->prev = temp->prev;
  temp->prev->next = temp->next;
  temp->prev = NULL;
  temp->next = NULL;
  delete temp;
}

int main() {
  Node *tail = NULL;

  insertNode(tail, 10, 0);
  print(tail);

  insertNode(tail, 34, 10);
  print(tail);

  insertNode(tail, 47, 10);
  print(tail);

  deleteNode(tail, 10);
  print(tail);
  cout << "Tail: " << tail->data << endl;
  return 0;
}
