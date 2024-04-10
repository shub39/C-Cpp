#include<iostream>
using namespace std;

void bubbleSort(int *arr, int n) {
  if (n == 1 || n == 0) return;
  for (int i = 0; i < n - 1; i++) {
    if (arr[i] > arr[i + 1]) swap(arr[i], arr[i + 1]);
  }
  bubbleSort(arr, n - 1);
}

int main() {
  
  int n;
  cout << "Enter array size: ";
  cin >> n;
  cout << endl;
  
  int arr[n];
  cout << "Enter Array numbers: ";
  for (int i = 0; i < n; i++) cin >> arr[i];
  cout << endl;
  
  bubbleSort(arr, n);

  cout << "Sorted Array: ";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  return 0;
}
