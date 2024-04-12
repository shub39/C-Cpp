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
  void b() {
    cout << "This is Class B" << endl;
  }
};

class C: public A {
public:
  void c() {
    cout << "This is Class C" << endl;
  }
};

int main() {
  A a;
  a.a();
  B b;
  b.a();
  b.b();
  C c;
  c.a();
  c.c();
  return 0;
}
