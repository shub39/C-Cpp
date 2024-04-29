#include <bits/stdc++.h>
void sortInsert(stack<int> &stack, int temp) {
  if (stack.empty() || stack.top() < temp) {
    stack.push(temp);
    return;
  }
  int top = stack.top();
  stack.pop();
  sortInsert(stack, temp);
  stack.push(top);
}
void sortStack(stack<int> &stack) {
  if (stack.empty()) {
    return;
  }
  int temp = stack.top();
  stack.pop();
  sortStack(stack);
  sortInsert(stack, temp);
}
