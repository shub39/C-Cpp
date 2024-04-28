// Implementing stacks using array
#include<iostream>

using namespace std;

class Stack {
public:
  int *arr;
  int top;
  int size;

  Stack(int size) {
    this->size = size;
    arr = new int[size];
    top = -1;
  }
  void push(int element) {
    if(size - top > 1) {
      top++;
      arr[top] = element;
      return;
    }
    cout << "Stack Overflow\n";
  }
  void pop() {
    if(top >= 0) {
      top--;
      return;
    }
    cout << "Stack Underflow\n";
  }
  int peek() {
    if(top >= 0 && top < size) {
      return arr[top];
    }
    cout << "Stack is Empty\n";
    return -1;
  }
  int isEmpty() {
    if(top == -1) {
      return false;
    }
    return true;
  }
};

int main() {
  Stack s(5);
  s.push(47);
  s.push(37);
  s.push(99);
  s.push(10);
  s.push(12);
  cout << s.peek() << "\n";
  return 0;
}
