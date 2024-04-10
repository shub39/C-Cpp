// Print the sum of all even numbers upto input n

#include <iostream>
#include <ostream>
using namespace std;

int main(){
    
    int a,n,sum;
    cout<<"Enter N: "<<endl;
    cin>>n;
    a = 1;
    sum = 0;

    while (a<=n) {
        if (a%2 == 0) {
            sum = sum+a;
            a++;
        }else {
            a++;
        }
    }

    cout<<sum<<endl;

}