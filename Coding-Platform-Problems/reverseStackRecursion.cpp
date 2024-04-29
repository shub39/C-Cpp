stack<int> pushAtBottom(stack<int> &myStack, int x) {
  stack<int> copy;
  while (!myStack.empty()) {
    int temp = myStack.top();
    copy.push(temp);
    myStack.pop();
  }
  myStack.push(x);
  while (!copy.empty()) {
    int temp = copy.top();
    myStack.push(temp);
    copy.pop();
  }
  return myStack;
}
void reverseStack(stack<int> &stack) {
  if(stack.empty()) {
    return;
  }
  int temp = stack.top();
  stack.pop();
  reverseStack(stack);
  pushAtBottom(stack, temp);
}
