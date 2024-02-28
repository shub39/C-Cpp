// Fibonacci series

#include <iostream>
using namespace std;

void fib(int a) {
    int z = 0;
    int o = 1;
    int ans = 0;
    while (a != 0) {
        ans = z + o;
        z = o;
        o = ans;
        a--; 
        cout << ans << endl;
    }
    
}

int main() {
    int a;
    cin >> a;
    cout << endl;
    fib(a);
    return 0;
    }   