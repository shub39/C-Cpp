#include <bits/stdc++.h>
class Deque {
private:
  int *arr;
  int front;
  int rear;
  int size;

public:
  Deque(int n) {
    size = n;
    arr = new int[size];
    front = rear = -1;
  }
  bool pushFront(int x) {
    if (isFull()) {
      return false;
    } else if (isEmpty()) {
      front = rear = 0;
    } else {
      front = (front - 1 + size) % size;
    }
    arr[front] = x;
    return true;
  }
  bool pushRear(int x) {
    if (isFull()) {
      return false;
    } else if (isEmpty()) {
      front = rear = 0;
    } else {
      rear = (rear + 1) % size;
    }
    arr[rear] = x;
    return true;
  }
  int popFront() {
    if (isEmpty()) {
      return -1;
    }
    int ans = arr[front];
    arr[front] = -1;
    if (front == rear) {
      front = rear = -1;
    } else if (front == size - 1) {
      front = 0;
    } else {
      front++;
    }
    return ans;
  }
  int popRear() {
    if (isEmpty()) {
      return -1;
    }
    int ans = arr[rear];
    arr[rear] = -1;
    if (front == rear) {
      front = rear = -1;
    } else if (rear == 0) {
      rear = size - 1;
    } else {
      rear--;
    }
    return ans;
  }
  int getFront() {
    if (isEmpty()) {
      return -1;
    }
    return arr[front];
  }
  int getRear() {
    if (isEmpty()) {
      return -1;
    }
    return arr[rear];
  }
  bool isEmpty() {
    if (front == -1 || rear == -1) {
      return true;
    }
    return false;
  }
  bool isFull() {
    return (front == 0 && rear == size - 1) ||
           (front != 0 && rear == (front - 1 + size) % size);
  }
};
