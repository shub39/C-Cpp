// Jaggered Arrays dynamically

#include<iostream>
using namespace std;

int main() {
  int row = 3;
  int sizes[] = {4, 2, 3};
  
  int **arr = new int * [row];
  for (int i = 0; i < row; i++) arr[i] = new int[sizes[i]];

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < sizes[i]; j++) cin >> arr[i][j];
  }

  cout << endl;
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < sizes[i]; j++) cout << arr[i][j] << " ";
    cout << endl;
  }

  for (int i = 0; i < row; i++) { //Releasing memeory
    delete [] arr[i];
  }
  delete [] arr;

  return 0;
}
