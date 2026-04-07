#include <iostream>

using namespace std;

class Employee {
private:
  string name;
  int id;
  string department;
  double salary;

public:
  Employee() {
    name = "Sojib";
    id = 1;
    department = "cse";
    salary = 200;
  }

  Employee(string n, int i, string d, double s) {
    name = n;
    id = i;
    department = d;
    salary = s;
  }

  void displayInfo() {
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "Department: " << department << endl;
    cout << "Salary: " << salary << endl;
  }
};

int main() {
  Employee em1;
  em1.displayInfo();

  Employee em2("Hridoy", 20, "Medical", 100);
  em2.displayInfo();

  return 0;
}