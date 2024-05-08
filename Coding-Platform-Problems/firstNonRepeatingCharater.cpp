#include <queue>
#include <string>
#include <unordered_map>
class Solution {
public:
  std::string FirstNonRepeating(std::string A) {
    std::unordered_map<char, int> count;
    std::queue<int> q;
    std::string ans = "";
    for (int i = 0; i < A.length(); i++) {
      char ch = A[i];
      count[ch]++;
      q.push(ch);
      while (!q.empty()) {
        if (count[q.front()] > 1) {
          q.pop();
        } else {
          ans.push_back(q.front());
          break;
        }
      }
      if (q.empty()) {
        ans.push_back('#');
      }
    }
    return ans;
  }
};
