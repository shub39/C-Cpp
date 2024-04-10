// 2D arrays 

#include <iostream>

using namespace std;

bool isPresent(int rows, int column, int arr[][4], int target) {
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < column; col++) {
            if (arr[row][col] == target) return true;
        }
    }
    return false;
}

void colSum(int rows, int column, int arr[][4]) {
    for (int row = 0; row < rows; row++) {
        int sum = 0;
        for (int col = 0; col < column; col++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

void rowSum(int rows, int column, int arr[][4]) {
    for (int col = 0; col < column; col++) {
        int sum = 0;
        for (int row = 0; row < rows; row++) {
            sum += arr[row][col];
        }
        cout << sum << " ";
    }
    cout << endl;
}

int main() {
    int arr[3][4];
    int arr2[3][4] = {{1,2,3,4}, {5,6,7,8},{9,10,11,12}}; //Hardcoded
/*
    for (int row = 0; row < 3; row++) { //Taking input from user
        for (int col = 0; col < 4; col++){
            cin >> arr[row][col];
        }
    }

    for (int row = 0; row < 3; row++) { //Printing array
        for (int col = 0; col < 4; col++){
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
*/
    cout << isPresent(3, 4, arr2, 11) << endl;
    colSum(3, 4, arr2);
    rowSum(3, 4, arr2);

    return 0;
}