// Linear Search using recursion

#include<iostream>
using namespace std;

bool linearSearch(int *arr, int n, int m) {
  if (n == 0) return false;
  if (arr[0] == m) return true;
  return linearSearch(arr + 1, n - 1, m);
}

int main() {
  int n;
  cout << "Enter array size: ";
  cin >> n;
  cout << endl;
  int arr[n];
  cout << "Enter Array: ";
  for (int i = 0; i < n; i++) cin >> arr[i]; 
  cout << endl;
  int m;
  cout << "Enter Number to search: ";
  cin >> m;
  cout << endl;
  if (linearSearch(arr, n, m)) {
    cout << "Number is present." << endl;
    return 0;
  } 
  cout << "Number is absent." << endl;
  return 0;
}
