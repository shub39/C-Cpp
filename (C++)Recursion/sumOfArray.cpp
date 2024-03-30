// Sum of an array with recursion

#include<iostream>
using namespace std;

int arraySum(int *arr, int n, int index = 0) {
  if (n == index) return 0;
  return arr[index] + arraySum(arr, n, index + 1);
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
  int sum = arraySum(arr, n);
  cout << "Sum of array is: " << sum << endl;
  return 0;
}
