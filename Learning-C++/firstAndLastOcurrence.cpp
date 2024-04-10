// Calculate first and last occurence of a number in array

#include <iostream>
using namespace std;

int firstOcc(int array[], int n, int a) {
    
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        
        if (array[mid] == a) {
            ans = mid;
            end = mid - 1;

        }
        if (array[mid] > a) {
            end = mid - 1;
        
        }
        else {
            start = mid + 1;

        } 
        mid = start + (end - start) / 2;
    }

    return ans;

}

int lastOcc(int array[], int n, int a) {
    
    int start = 0;
    int end = n - 1;
    int mid = start + (end - start) / 2;
    int ans = -1;
    while (start <= end) {
        
        if (array[mid] == a) {
            ans = mid;
            start = mid + 1;

        }
        if (array[mid] > a) {
            end = mid - 1;
        
        }
        else {
            start = mid + 1;

        } 
        mid = start + (end - start) / 2;
    }

    return ans;

}

int main() {
    int exrry[7] = {1,2,2,3,3,3,5};
    int ans = firstOcc(exrry, 7, 3);
    int ans2 = lastOcc(exrry, 7, 3); 
    cout << ans << endl; 
    cout << ans2 << endl;

    }  