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
    if (this->next != NULL) {
      delete next;
      this->next = NULL;
    }
  }
};

void print(Node *&head) {
  Node *temp = head;
  while (temp != NULL) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

void insertAtHead(Node *&head, int data) {
  Node *temp = new Node(data);
  temp->next = head;
  head->prev = temp;
  head = temp;
}

void insertAtTail(Node *&tail, int data) {
  Node *temp = new Node(data);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
}

void deleteNode(Node *&head, Node *&tail, int position) {
  if (head == NULL && tail == NULL) {
    cout << "Nothing to Delete." << endl;
    return;
  }
  if (position == 1) {
    Node *temp = head;
    temp->next->prev = NULL;
    head = temp->next;
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
    prev->next = NULL;
    tail = prev;
    delete current;
    return;
  }
  prev->next = current->next;
  current->next = NULL;
  delete current;
}

void insert(Node *&head, Node *&tail, int position, int data) {
  if (head == NULL && tail == NULL) {
    Node *temp = new Node(data);
    head = temp;
    tail = head;
    return;
  }
  if (position == 1) {
    insertAtHead(head, data);
    return;
  }
  Node *nodeToInsert = new Node(data);
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
  nodeToInsert->next = temp->next;
  temp->next->prev = nodeToInsert;
  temp->next = nodeToInsert;
  nodeToInsert->prev = temp;
}

int main() {
  Node *head = NULL;
  Node *tail = NULL;

  insert(head, tail, 1, 26);
  print(head);

  insert(head, tail, 2, 50);
  print(head);

  insert(head, tail, 2, 16);
  print(head);

  deleteNode(head, tail, 3);
  print(head);

  cout << "Head: " << head->data << endl;
  cout << "Tail: " << tail->data << endl;
  return 0;
}
