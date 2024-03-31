// Reverse a given string with recursion

#include<iostream>
#include<string>
using namespace std;

void reverseString(string& a,int end,int start = 0) {
  if (start > end) return;
  swap(a[start++], a[end--]);
  return reverseString(a, end, start); 
}

int main(){
  
  string a = "";
  cout << "Enter the string: ";
  cin >> a;
  cout << endl;
  int end = a.length() - 1;
  reverseString(a, end);
  cout << "The reversed string is: " << a << endl;

  return 0;
}
