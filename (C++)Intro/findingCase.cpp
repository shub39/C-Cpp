// Find the case of input character.

#include <iostream>
#include <ostream>
using namespace std;

int main(){
    
    int v;
    cout<<"Enter Character: "<<endl;
    v = cin.get();

    if (96<v and v<123) {
        cout<<"The Character is lowercase."<<endl;    
    }else if (64<v and v<91) {
        cout<<"The Character is uppercase."<<endl;
    }else if (47<v and v<59) {
        cout<<"The Character is Numeric."<<endl;
    }else {
        cout<<"Unknown Character."<<endl;
    }


}