#include<iostream>
using namespace std;

class Animal {
private:
  int weight;
  int age;
  int height;
public:
  int getAge() {
    return this->age;
  }
  void setAge(int a) {
    this->age = a;
  }
};

class Dog: public Animal {
public:
  string color;
  void sleep() {
    cout << "Dog Sleeping" << endl;
  }
};

class Labrador: public Dog {
public:
  void name() {
    cout << "This is a Labrador" << endl;
  }
};

int main() {
  Labrador kutta;
  kutta.sleep();
  kutta.setAge(25);
  cout << kutta.getAge() << endl;
  kutta.name();
  return 0;
}
