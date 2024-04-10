//Checks if a number is prime or not

#include <iostream>
#include <ostream>
using namespace std;

int main () {

    for (int n = 1000; n > 1; n--) {

        bool prime = true;

        for (int mid = n/2; mid > 1; mid--) {
                if (n%mid == 0) {
                    prime = false;
                    break;
                }
                else {
                    prime = true;
                }
        }

        if (prime == true) {
            cout<<n<<endl;
        
        }

    }


}