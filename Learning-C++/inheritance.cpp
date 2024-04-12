#include<iostream>
using namespace std;

class Human {
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

class Male: public Human {
public:
  string color;
  void sleep() {
    cout << "Male Sleeping" << endl;
  }
};

int main() {
  Male shub;
  shub.sleep();
  return 0;
}
