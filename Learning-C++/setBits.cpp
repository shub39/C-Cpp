//find the number of set bits in two numbers

#include <iostream>
using namespace std;

void setBits(int a, int b) {
    int bits = 0;
    while (a != 0) {
        if ((a & 1) == 1) {
            bits++;
        }
        a = a >> 1;
    
    }
    while (b != 0) {
        if ((b & 1) == 1) {
            bits++;
        }
        b = b >> 1;
    
    }
    cout << bits << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    setBits(a, b);

    }   
