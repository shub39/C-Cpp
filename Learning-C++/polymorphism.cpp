#include<iostream>
using namespace std;

class A {
public:
  int a = 0;
  void sayHello() {
    cout << "Hello! This is Class A" << endl;
  }
  void sayHello(int n) {
    cout << "Hello! This is Class A" << endl;
    cout << n << endl;
  }
  void sayHello(string s) {
    cout << "Hello! This is " << s << endl;
    cout << s << endl;
  }
  void operator+(A &obj) {
    cout << "This is sum operator" << endl;
  }
  void operator()() {
    cout << "This is Bracket " << this-> a << endl;
  }
};

int main() {
  A A, B;
  A.sayHello();
  A.sayHello(25);
  A.sayHello("shub");
  A.a = 5;
  B.a = 25;
  A + B;
  A();
  return 0;
}
