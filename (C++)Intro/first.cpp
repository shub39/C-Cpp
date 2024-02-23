// My first C++ program. Find if input a is +ve, -ve or zero.

#include <iostream>
#include <ostream>
using namespace std;

int main(){
    
    int a;
    cout << "Enter A:" << endl;
    cin>>a;

    if (a>0) {
        cout<<"A is positive"<<endl;    
    }else if (a==0) {
        cout<<"A is zero"<<endl;
    }else {
        cout<<"A is negative"<<endl;
    }

}