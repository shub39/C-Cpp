// Implementing stacks using Linked Lists
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
};

class Stack {
public:
  Node *head;
  Node *top;
  int size;

  Stack(int size) {
    this->head = new Node(-1);
    Node *temp = head;
    for(int i = 0; i <= size; i++) {
      temp->next = new Node(-1);
      temp = temp->next;
    }
    this->top = head;
    this->size = size;
  }
  void push(int element) {
    if(this->top->next == NULL) {
      cout << "Stack Overflow\n";
      return;
    }
    this->top = this->top->next;
    this->top->data = element;
  }
  void pop() {
    if(this->top->data == -1){
      cout << "Stack Underflow\n";
      return;
    }
    this->top->data = -1;
    Node *temp = this->head;
    while(temp->next != this->top) {
      temp = temp->next;
    }
    this->top = temp;
  }
  void peek() {
    if(this->top->data == -1){
      cout << "Empty Stack\n";
      return;
    }
    cout << this->top->data << "\n";
  }
};

int main() {
  Stack s(5);
  s.push(47);
  s.push(37);
  s.push(99);
  s.push(10);
  s.push(12);
  s.peek();
  s.pop();
  s.peek();
  return 0;
}
