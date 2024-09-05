// Implement a queue using arrays

#include<stdio.h>

#define MAX 5
int queue[MAX];
int rear = -1;
int front = -1;

int isFull() {
  return rear == MAX - 1;
}

void enqueue(int a) {
  if (rear == -1 && front == -1) {
    front = rear = 0;
    queue[rear] = a;
    printf("Enqueued: %d\n", a);
  } else if (rear == 0 && front == 0) {
    rear++;
    queue[rear] = a;
    printf("Enqueued: %d\n", a);
  } else if (isFull()) {
    printf("\nCant Enqueue array is full.\n");
  } else {
    rear++;
    queue[rear] = a;
    printf("Enqueued: %d\n", a);
  }
}

void printQueue() {
  printf("\n");
  for (int i = front; i <= rear; i++) {
    printf("%d ", queue[i]);
  }
  printf("\n");
}

void dequeue() {
  if (front == -1 || front == MAX) {
    printf("\nNothing to dequeue\n");
  } else {
    printf("Dequeued: %d\n", queue[front]);
    front++;
  }
}

int main () {
  enqueue(5);
  dequeue();
  enqueue(3);
  enqueue(2);
  enqueue(1);
  enqueue(12);
  enqueue(123);
  printQueue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();
  dequeue();

  return 0;
}
