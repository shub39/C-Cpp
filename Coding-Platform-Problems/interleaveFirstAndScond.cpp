#include <queue>
#include <stack>
#include <vector>

class Solution {
public:
  std::vector<int> rearrangeQueue(std::queue<int> &q) {
    std::stack<int> s;
    int length = q.size() / 2 - 1;
    for (int i = 0; i <= length; i++) {
      s.push(q.front());
      q.pop();
    }
    while (!s.empty()) {
      q.push(s.top());
      s.pop();
    }
    for (int i = 0; i <= length; i++) {
      q.push(q.front());
      q.pop();
    }
    for (int i = 0; i <= length; i++) {
      s.push(q.front());
      q.pop();
    }
    std::vector<int> ans;
    while (!s.empty() && !q.empty()) {
      ans.push_back(s.top());
      s.pop();
      ans.push_back(q.front());
      q.pop();
    }
    return ans;
  }
};
