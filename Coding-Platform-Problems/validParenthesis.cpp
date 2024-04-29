bool match(char top, char ch) {
  if (top == '(' && ch == ')') {
    return true;
  } else if (top == '{' && ch == '}') {
    return true;
  } else if (top == '[' && ch == ']') {
    return true;
  }
  return false;
}

bool isValidParenthesis(string s) {
  stack<char> str;
  for (int i = 0; i < s.length(); i++) {
    char ch = s[i];
    if (ch == '(' || ch == '{' || ch == '[') {
      str.push(ch);
    } else {
      if (str.empty()) {
        return false;
      } else {
        char top = str.top();
        if (match(top, ch)) {
          str.pop();
        } else {
          return false;
        }
      }
    }
  }
  if(str.empty()) {
    return true;
  }
  return false;
}
