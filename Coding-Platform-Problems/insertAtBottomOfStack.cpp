// Rcursive Solution (partially accepted)
#include <bits/stdc++.h>
stack<int> pushAtBottom(stack<int> &myStack, int x) {
  if (myStack.empty()) {
    myStack.push(x);
    return myStack;
  }
  int temp = myStack.top();
  myStack.pop();
  pushAtBottom(myStack, x);
  myStack.push(temp);
  return myStack;
}
