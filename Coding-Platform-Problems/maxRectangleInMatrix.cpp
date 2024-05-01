class Solution {

public:
  int maxArea(int mat[MAX][MAX], int n, int m) {
    int ans = 0;

    for (int i = 1; i < n; i++)
      for (int j = 0; j < m; j++)
        if (mat[i][j])
          mat[i][j] = (mat[i - 1][j]) + (mat[i][j]);

    for (int i = 0; i < n; i++) {
      stack<int> s;
      for (int j = 0; j <= m; j++) {
        while (!s.empty() && (j == m || (mat[i][s.top()]) > (mat[i][j]))) {
          int tp = s.top();
          s.pop();
          ans = max(ans, (mat[i][tp]) * (s.empty() ? j : (j - s.top() - 1)));
        }
        s.push(j);
      }
    }
    return ans;
  }
};
