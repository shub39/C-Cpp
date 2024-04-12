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

class Human {
public:
  string color;
  void sleep() {
    cout << "Human Sleeping" << endl;
  }
};

class Hannibal: public Animal, public Human {
public:
  void name() {
    cout << "This is a Hybrid animal" << endl;
  }
};

int main() {
  Hannibal kutta;
  kutta.sleep();
  kutta.setAge(25);
  cout << kutta.getAge() << endl;
  kutta.name();
  return 0;
}
