#include <climits>
class SpecialStack {
private:
  stack<int> s;
  int min = INT_MAX;
public:
  void push(int data) {
    if (s.empty()) {
      s.push(data);
      min = data;
    } else if (data < min) {
      s.push(2 * data - min);
      min = data;
    } else {
      s.push(data);
    }
  }

  void pop() {
    if (s.top() > min) {
      s.pop();
    } else {
      min = 2 * min - s.top();
      s.pop();
    }
  }

  int top() {
    if (s.top() < min) {
      return min;
    }
    return s.top();
  }

  int getMin() {
    return min;
  }
};
