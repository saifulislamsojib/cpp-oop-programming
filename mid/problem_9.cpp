#include <iostream>

using namespace std;

class Student {
private:
  string name;
  int id;

public:
  Student(string n, int i) {
    name = n;
    id = i;
  }

  ~Student() { cout << "Student object destroyed for name: " << name << endl; }
};

int main() {
  Student s1("Sojib", 1);
  Student s2("Nahid", 2);

  return 0;
}