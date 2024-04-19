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

int getLength(Node *tail) {
  int len = 0;
  Node *temp = tail;
  do {
    len++;
    temp = temp->next;
  } while (temp->data != tail->data);
  return len;
}

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

Node *divide(Node *tail) {
  int len = getLength(tail);
  Node *temp = tail;
  Node *part = NULL;
  Node *iter = tail;
  if (len % 2 == 0) {
    for (int x = 0; x < len / 2 - 1; x++) {
      temp = temp->next;
    }
    part = temp->next;
    iter = part;
    temp->next = tail;
    while (part->next->data != tail->data) {
      part = part->next;
    }
    part->next = iter;
  } else {
    for (int x = 0; x < len / 2; x++) {
      temp = temp->next;
    }
    part = temp->next;
    iter = part;
    temp->next = tail;
    while (part->next->data != tail->data) {
      part = part->next;
    }
    part->next = iter;
  }
  return iter;
}

int main() {
  Node *tail = NULL;

  insertNode(tail, 30, 8);
  print(tail);

  insertNode(tail, 8, 2);
  print(tail);

  insertNode(tail, 2, 20);
  print(tail);

  insertNode(tail, 2, 47);
  print(tail);

  insertNode(tail, 2, 98);
  print(tail);

  Node *next = divide(tail);
  print(tail);
  print(next);
  return 0;
}
