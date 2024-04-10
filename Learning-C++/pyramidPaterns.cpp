#include <iostream>
#include <ostream>
using namespace std;

//###############################################################################################################################
// Input = 5, Output =
// 1 2 3 4 5 5 4 3 2 1 
// 1 2 3 4 * * 4 3 2 1 
// 1 2 3 * * * * 3 2 1 
// 1 2 * * * * * * 2 1 
// 1 * * * * * * * * 1 

int main () {
    int n;
    cin>>n;

    int row = 1;
    while (row <= n) {
        int col = 1;
        while (col <= n - row + 1) {
            cout<<col<<" ";
            col++;
        }

        int star = (row - 1) * 2;
        while (star) {
            cout<<"* ";
            star--;
        }
        
        int start = n - row + 1;
        while (start) {
            cout<<start<<" ";
            start--;

        }
        cout<<endl;
        row++;
    
    }
    
    }
