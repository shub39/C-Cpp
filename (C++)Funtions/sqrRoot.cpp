// Find Square root

#include <iostream>
using namespace std;

long long int sqrt(int n) {

    int start = 0;
    int end = n;
    long long int mid = start + (end - start) / 2;
    long long int ans = -1;
    while (start <= end) {
        long long int square = mid * mid;

        if (square == n) return mid;

        if (square < n) {
            ans = mid;
            start = mid + 1;
        }

        else end = mid - 1;

        mid = start + (end - start) / 2;
    }
    return ans;

}

double morePrecise(int n, int pre, int tempSol) {

    double factor = 1;
    double ans = tempSol;

    for (int i = 0; i < pre; i++) {

        factor = factor / 10;

        for (double j = ans; j * j < n; j += factor) {
            ans = j;
        }
    
    }
    return ans;

}

int main () {

    int n; 
    int pre;
    cout << "Enter number: " << endl;
    cin >> n;
    cout << "Enter Precision" << endl;
    cin >> pre;

    int tempSol = sqrt(n);
    cout << "Answer is: " << morePrecise(n, pre, tempSol) << endl;
    return 0;

}