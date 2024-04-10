// Binary search with recursion

#include<iostream>
using namespace std;

bool isSorted(int *arr, int n) {
  if (n == 0 || n == 1) return true;
  if (arr[0] > arr[1]) return false;
  else return isSorted(arr + 1, n - 1);
}

bool binarySearch(int *arr, int e, int m, int s = 0) {
  if (s > e) return false;
  int mid = s + (e - s) / 2;
  if (arr[mid] == m) return true;
  if (arr[mid] < m) return binarySearch(arr, e, m, mid + 1);
  else return binarySearch(arr, mid - 1, m);
}

int main() {
  int n;
  cout << "Enter array size: ";
  cin >> n;
  cout << endl;
  int arr[n];
  cout << "Enter sorted Array: ";
  for (int i = 0; i < n; i++) cin >> arr[i]; 
  cout << endl;
  if (isSorted(arr, n) == false) {
    cout << "Array is not sorted." << endl;
    return 0;
  }
  int m;
  cout << "Enter Number to search: ";
  cin >> m;
  cout << endl;
  if (binarySearch(arr, n - 1, m)) {
    cout << "Number is present." << endl;
    return 0;
  }
  cout << "Number is absent." << endl;
  return 0;
}
