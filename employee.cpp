#include <iostream>

using namespace std;

class Employee {
private:
  int id;
  string name;
  double salary;

public:
  void getInput() { cin >> id >> name >> salary; }
  void display() {
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Salary: " << salary << endl;
  }
};

int main() {
  Employee e1;
  Employee e2;
  Employee e3;

  e1.getInput();
  e2.getInput();
  e3.getInput();

  e1.display();
  cout << endl;
  e2.display();
  cout << endl;
  e3.display();

  return 0;
}