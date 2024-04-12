#include<iostream>
using namespace std;

class A {
public:
  void a() {
    cout << "This is Class A" << endl;
  }
};

class B: public A {
public:
  void a() {
    cout << "This is Class B" << endl;
  }
};

class C: public A {
public:
  void a() {
    cout << "This is Class C" << endl;
  }
};

int main() {
  A a;
  a.a();
  B b;
  b.a();
  b.a::a(); // Also this is an example of runtime polymorphism
  C c;
  c.a();
  c.a::a(); // Scope Resolution operataor
  return 0;
}
