// Binary Search

#include <iostream>
using namespace std;

int binarySearch(int array[], int n, int a) {
    
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;

    while (start <= end) {
        
        if (array[mid] == a) {
            return mid;

        }
        if (array[mid] > a) {
            end = mid - 1;
        
        }
        else {
            start = mid + 1;

        } 
        mid = start + (end - start) / 2;
    }

    return -1;

}


int main() {
    int exrry[6] = {1,11,22,33,555,666};
    int ans = binarySearch(exrry, 6, 33);
    cout << ans << endl; 

    }   