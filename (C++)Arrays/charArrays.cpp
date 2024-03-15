// Learning about charArrays or strings

#include <iostream>
#include <utility>

using namespace std;

int getLength (char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) count++;
    return count;
}

int palindrome (char name[]) {
    int start = 0;
    int end = getLength(name) - 1;
    while (start <= end) {
        if (name[start] != name[end]) return 0;
        else {
            start++;
            end--;
        }
    }
    return 1;
}

void reverseString (char name[]) {
    int start = 0;
    int end = getLength(name) - 1;
    while (start <= end) {
        swap(name[start++], name[end--]);
    }
}


int main () {
    char name[20];
    cout << "Enter your name: " << endl;
    cin >> name;

    cout << "Your name is " << name << endl;
    cout << "Length: " << getLength(name) << endl;

    reverseString(name);
    cout << "Your reversed name is: " << name << endl;
    if (palindrome(name) == 1) {
        cout << "Your name is a palindrome" << endl;
    }
    return 0;
}