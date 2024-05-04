
#include <bits/stdc++.h>
class NStack {
  int *arr;
  int *top;
  int *next;
  int free, n, s;

public:
  NStack(int N, int S) {
    n = N;
    s = S;
    arr = new int[s];
    top = new int[n];
    next = new int[s];
    for (int i = 0; i < n; i++) {
      top[i] = -1;
    }
    for (int i = 0; i < s; i++) {
      next[i] = i + 1;
    }
    next[s - 1] = -1;
    free = 0;
  }
  bool push(int x, int m) {
    if (free == -1) {
      return false;
    }
    int index = free;
    free = next[index];
    arr[index] = x;
    next[index] = top[m - 1];
    top[m - 1] = index;
    return true;
  }
  int pop(int m) {
    if (top[m - 1] == -1) {
      return -1;
    }
    int index = top[m - 1];
    top[m - 1] = next[index];
    next[index] = free;
    free = index;
    return arr[index];
  }
};
