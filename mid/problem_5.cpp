#include <iostream>

using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person(string n, int a) {
    name = n;
    age = a;
  }
  void displayParsonInfo() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

class Student : public Person {
private:
  int roll;
  double cgpa;

public:
  Student(string n, int a, int r, double c) : Person(n, a) {
    roll = r;
    cgpa = c;
  }

  void displayStudentInfo() {
    displayParsonInfo();
    cout << "Roll: " << roll << endl;
    cout << "CGPA: " << cgpa << endl;
  }
};

int main() {
  Student s1("Sojib", 15, 1, 3.8);
  Student s2("Nadem", 18, 3, 3.5);

  s1.displayStudentInfo();
  s2.displayStudentInfo();
  return 0;
}