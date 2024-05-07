#include <bits/stdc++.h>
#include <iostream>

class Node {
public:
  int data;
  Node *next;
  Node(int data) {
    this->data = data;
    this->next = NULL;
  }
};

class Queue {
private:
  Node *first;
  Node *last;
public:
  Queue() {
    first = last = NULL;
  }
  void push(int data) {
    Node* newNode = new Node(data);
    if (isEmpty()) {
      first = last = newNode;
    } else {
      last->next = newNode;
      last = last->next;
    }
  }
  int pop() {
    if (isEmpty()) {
      return -1;
    }
    Node *temp = first;
    int ans = temp->data;
    first = first->next;
    delete temp;
    if (first == NULL) {
      last = NULL;
    }
    return ans;
  }
  bool isEmpty() {
    return first == NULL;
  }
  int peek() {
    if (isEmpty()) {
      return -1;
    } else {
      return first->data;
    }
  }
  void display() {
    if (isEmpty()) {
      return;
    }
    Node *temp = first;
    while(temp != NULL) {
      std::cout << temp->data << " ";
      temp = temp->next;
    }
    std::cout << std::endl;
  }
};

int main() {
  Queue s;
  s.push(10);
  s.push(20);
  s.display();
  std::cout << s.pop() << "\n";
  std::cout << s.pop() << "\n";
  return 0;
}
