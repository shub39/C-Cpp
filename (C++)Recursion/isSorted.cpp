// Check if array is sorted.

#include<iostream>
using namespace std;

bool isSorted(int *arr, int n) {
  if (n == 0 || n == 1) return true;
  if (arr[0] > arr[1]) return false;
  else return isSorted(arr + 1, n - 1);
}

int main() {
  int n;
  cout << "Enter array size: ";
  cin >> n;
  cout << endl;
  int arr[n];
  cout << "Enter Array: ";
  for (int i = 0; i < n; i++) cin >> arr[i]; 
  if (isSorted(arr, n)) cout << "Array is Sorted." << endl;
  else cout << "Array is not Sorted." << endl;
  return 0;
}
