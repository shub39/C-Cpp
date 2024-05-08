class Solution {
public:
  queue<int> modifyQueue(queue<int> q, int k) {
    stack<int> s;
    for (int i = 0; i < k; i++) {
      s.push(q.front());
      q.pop();
    }
    while (!s.empty()) {
      q.push(s.top());
      s.pop();
    }
    int a = q.size() - k;
    while (a--) {
      q.push(q.front());
      q.pop();
    }
    return q;
  }
};
