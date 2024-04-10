// binary number -> decimal number

#include <cmath>
#include <iostream>
#include <ostream>
using namespace std;

int main () {
    int n;
    cin >> n;

    int i = 0;
    int ans = 0;

    while (n != 0) {
        int digit = n % 10;
        ans = (digit == 1) ? ans + pow(2,i) :ans = ans; // Inline funtions
        n = n / 10;
        i++;
    
    }

    cout << ans << endl;

}
