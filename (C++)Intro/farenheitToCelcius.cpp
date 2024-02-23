// Convert Farenheit input to celsius or vice-versa

#include <iostream>
#include <ostream>
using namespace std;

int main(){
    
    float a,t,tf;

    cout<<"Enter Operation"<<endl;
    cout<<"1) Farenheit to Celsis"<<endl;
    cout<<"2) Celcius to Farenheit"<<endl;
    cin>>a;

    if (a == 1) {
        cout<<"Enter temperature in Farenheit: "<<endl;
        cin>>t;
        tf = (t-32)*(5.0/9.0);
        cout<<tf<<" degree celcius"<<endl;
    }else {
        cout<<"Enter temperature in Celcius: "<<endl;
        cin>>t;
        tf = (t*(9.0/5.0))+32;
        cout<<tf<<" degree Farenheit"<<endl;
    }

}