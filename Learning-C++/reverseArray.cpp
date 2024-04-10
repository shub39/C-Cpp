// search for a number in an array

#include <iostream>
#include <utility>
using namespace std;

void reverseArray(int arr[], int size) {
    int a = 0;
    int b = size - 1;
    while (a <= b) {
        swap(arr[a], arr[b]);
        a++;
        b--;
    
    }

}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter size of the array: " << endl;
    cin >> size;

    int arr[size];
    cout << "Enter digits: " << endl;
    
    for (int i =0; i < size; ++i) {
        cin >> arr[i];
    
    }

    cout << "You Entered: "; 
    displayArray(arr, size);
    cout << endl;

    reverseArray(arr, size);

    cout << "Reversed Array: ";
    displayArray(arr, size);
    cout << endl;

    return 0;
    }   