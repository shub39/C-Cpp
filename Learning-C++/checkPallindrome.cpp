// Check if given string is a pallindrome

#include <iostream>
#include <string>
using namespace std;

bool checkPallindrome(string &a, int end, int start = 0) {
  if (start > end)
    return true;
  if (a[start++] != a[end--])
    return false;
  return checkPallindrome(a, end, start);
}

int main() {
  string a = "";
  cout << "Enter the string: ";
  cin >> a;
  cout << endl;
  int end = a.length() - 1;
  if (checkPallindrome(a, end)) {
    cout << "Its a Pallindrome!" << endl;
    return 0;
  }
  cout << "Not a Pallindrome..." << endl;
  return 0;
}
