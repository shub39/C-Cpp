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
    cout << "Animal Sleeping" << endl;
  }
};

int main() {
  Dog kutta;
  kutta.sleep();
  kutta.setAge(25);
  cout << kutta.getAge() << endl;
  return 0;
}
