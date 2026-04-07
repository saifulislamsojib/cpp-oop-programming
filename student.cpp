#include <iostream>

using namespace std;

class Student {
public:
  string name;
  int roll;
  float marks;
};

int main() {
  Student s1;
  cin >> s1.name >> s1.roll >> s1.marks;
  cout << "Name: " << s1.name;
  cout << "\nRoll: " << s1.roll;
  cout << "\nmarks: " << s1.marks;
  return 0;
}