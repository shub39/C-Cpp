// sum of numbers in an array

#include <iostream>
using namespace std;

int main() {
    int array[10] = {1,2,3,4,5,34,12,98,69,420};
    int i = 0;
    int sum = 0;

    for (;i < 10 ;i++) {
        sum = sum + array[i];

    }
    cout << sum << endl;

    }   
