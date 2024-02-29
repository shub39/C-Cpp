// search for a number in an array

#include <iostream>
using namespace std;

bool arraySearch(int a, int arr[]) {
    int i = 0;
    for (; i < 10; i++) {
        if (a == arr[i]) {
            return true;
        
        }
    }
    return false;
}

int main() {
    int array[10] = {1,2,3,4,5,34,12,98,69,420};
    int n;
    cout << "Enter Number to search: " << endl;
    cin >> n;

    bool res = arraySearch(n, array);
    if (res) {
        cout << "The number is present." << endl;
        return 0;
    }
    cout << "The number is not present" << endl;
    return 0;
    }   