#include<iostream>

using namespace std; 

class Hero {
private:
  int health;
  char level;
public:
  void setHealth(int n) {
    health = n;
  }
  void setLevel(char n) {
    level = n;
  }
  int getHealth() {
    return health;
  }
  char getLevel() {
    return level;
  }
};

int main() {
  Hero luffy;
  luffy.setHealth(100);
  luffy.setLevel('A');
  cout << luffy.getHealth() << endl;
  cout << luffy.getLevel() << endl;

  Hero *zoro = new Hero;
  zoro->setHealth(150);
  zoro->setLevel('O');
  cout << zoro->getHealth() << endl;
  cout << zoro->getLevel() << endl;
}
