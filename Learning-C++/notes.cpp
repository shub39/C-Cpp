#include <iostream>
#include <ostream>
using namespace std;

int main () {
    int a;
    cout << "Enter amount: " << endl;
    cin >> a;
    int note;
    cout << "Enter Note; "<< endl;
    cin >> note;

    switch (note) {

        default : cout << "Enter valid Note" << endl;
                break;

        case 1: cout << a << "Notes are required" << endl;
                break;

        case 20: cout << a/20 << "Notes are required" << endl;
                break;      

        case 50: cout << a/50 << "Notes are required" << endl;
                break;   

        case 100: cout << a/100 << " Notes are required" << endl;
                break;                      

    }   
}