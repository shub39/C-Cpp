#include<iostream>
using namespace std;

int partition(int arr[], int s, int e) {
  
  int pivot = arr[s];
  int cnt = 0;
  for (int i = s + 1; i <= e; i++){
    if(arr[i] <= pivot) cnt++;
  }

  int pivotIndex = s + cnt;
  swap(arr[pivotIndex], arr[s]);

  int i = s, j = e;
  while(i < pivotIndex && j > pivotIndex) {
    while(arr[i] <= pivot) i++;
    while (arr[j] > pivot) j++;
    if (i < pivotIndex && j > pivotIndex) swap(arr[i++], arr[j--]);
  }
  return pivotIndex;
}

void quickSort(int arr[], int s, int e) {
  if (s >= e) return;
  int p = partition(arr, s, e);
  quickSort(arr, p + 1, e);
  quickSort(arr, s, p - 1);
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
  
  quickSort(arr, 0, n - 1);

  cout << "Sorted Array: ";
  for (int i = 0; i < n; i++) cout << arr[i] << " ";
  cout << endl;

  return 0;
}
