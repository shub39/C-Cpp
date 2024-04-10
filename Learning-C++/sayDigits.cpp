#include<iostream>
using namespace std;

void sayDigits(int n, string arr[]) {
  if (n == 0) return;
  int m = n % 10;
  n = n / 10;
  sayDigits(n, arr);
  cout << arr[m] << " " ;
}

int main() {
  string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
  int n;
  cin >> n;
  cout << endl;
  sayDigits(n, arr);
  cout << endl;
  return 0;
}
