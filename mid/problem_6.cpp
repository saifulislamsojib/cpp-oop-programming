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

  void displayParson() {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
  }
};

class Employee : public Person {
protected:
  string department;
  double salary;

public:
  Employee(string n, int a, string d, double s) : Person(n, a) {
    department = d;
    salary = s;
  }

  void displayEmploy() {
    displayParson();
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
  }
};

class Manager : public Employee {
private:
  int teamSize;
  string projectName;

public:
  Manager(string n, int a, string d, double s, int t, string p)
      : Employee(n, a, d, s) {
    teamSize = t;
    projectName = p;
  }

  void displayManager() {
    displayEmploy();
    cout << "Team Size: " << teamSize << endl;
    cout << "Project Name: " << projectName << endl;
  }
};

int main() {
  Person p1("Nahid", 20);
  Employee e1("Sojib", 25, "Technology", 20000);
  Manager m1("Rasel", 35, "Technology", 100000, 20, "Neptune");

  p1.displayParson();
  cout << endl;
  e1.displayEmploy();
  cout << endl;
  m1.displayManager();
}