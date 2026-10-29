#include <iostream>
#include <string>
using namespace std;

class Student {
public:
  string name;
  int age;

  void introduce() {
    cout << "Hi, I'm " << name << ", " << age << " years old." << endl;
  }
};

int main() {
  Student s1;
  s1.name = "Jeofrey";
  s1.age = 19;
  s1.introduce();

  Student s2;
  s2.name = "Jasit";
  s2.age = 18;
  s2.introduce();

  return 0;
}