#include <iostream>
#include <ostream>
using namespace std;

//###############################################################################################################################

// A letter square

// int main () {
//     int n;
//     cin>>n;
//     int row = 1;
//     while (row <= n) {
//         int col = 1;
//         while (col <= n) {
//             char ch = 'A' + col + row - 2;
//             cout<<ch<<" ";
//             col++; 
        
//         }
//         cout<<endl;
//         row++;
    
//     }
// } 

//###############################################################################################################################

// Print a number square pattern. if input = 4, output is;
// 1234
// 1234
// 1234
// 1234

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;

//     while (i <= n) {
//         int j = 1;
//         while (j <= n) {
//             cout<<j<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }

// }

// Reverse

// int main(){
//     int n;
//     cin>>n;

//     int i = 1;

//     while (i <= n) {
//         int j = 1;
//         while (j <= n) {
//             cout<<n-j+1<<" ";
//             j++;
//         }
//         cout<<endl;
//         i++;
//     }
// }

//###############################################################################################################################

// Print counting square, if input = 3, output =
// 1 2 3 
// 4 5 6 
// 7 8 9 

int main(){
    int n;
    int count = 1;
    cin>>n;

    int i = 1;
    while (i <= n) {
        int j = 1;
        while (j <= n) {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}


