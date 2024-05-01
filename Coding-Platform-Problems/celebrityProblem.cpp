class Solution {
private:
  bool knows(vector<vector<int>> &M, int a, int b) {
    if ((M[a][b]) == 1) {
      return true;
    }
    return false;
  }

public:
  int celebrity(vector<vector<int>> &M, int n) {
    stack<int> s;
    for (int i = 0; i < n; i++) {
      s.push(i);
    }
    while (s.size() > 1) {
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();
      if (knows(M, a, b)) {
        s.push(b);
      } else {
        s.push(a);
      }
    }
    int ans = s.top();
    bool row = false;
    bool col = false;
    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < n; i++) {
      if (M[ans][i] == 0) {
        zeros++;
      }
    }
    if (zeros == n) {
      row = true;
    }
    for (int i = 0; i < n; i++) {
      if (M[i][ans] == 1) {
        ones++;
      }
    }
    if (ones == n - 1) {
      col = true;
    }
    if (row && col) {
      return ans;
    }
    return -1;
  }
};
