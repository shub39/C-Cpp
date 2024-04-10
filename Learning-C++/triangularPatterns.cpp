#include <iostream>
#include <ostream>
using namespace std;

//###############################################################################################################################

// Letter pattern

// int main () {
//     int n;
//     cin>>n;

//     int row = 1;
//     while (row <= n) {
//         int col = 1;
//         while (col <= row) {
//             char ch = 'A' + n - row + col - 1;
//             cout<<ch<<" ";
//             col++;

//         }
//         cout<<endl;
//         row++;
    
//     }
// }

//###############################################################################################################################

// Reverse Triangle

int main () {
    int n;
    cin>>n;
    int count = 1;

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n - row) {
            cout<<"  ";
            col++;
        
        }

        while (col <= n) {
            cout<<count<<" ";
            col++;
            count++;

        }
        cout<<endl;
        row++;
    
    }
}