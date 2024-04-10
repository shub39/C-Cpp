#include<iostream>

using namespace std;

int main() {
  int a = 5;
  int * ap = &a;
  int ** app = &ap;
  cout << "a: " << a << endl;
  cout << "*ap: " << *ap << endl;
  cout << "**app: " << **app << endl;
  return 0;
}
