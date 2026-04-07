#include <iostream>

using namespace std;

class Student {
private:
  string name;
  int id;
  double cgpa;

public:
  Student(string name, int id, double cgpa) {
    this->name = name;
    this->id = id;
    this->cgpa = cgpa;
  }

  void printInfo() {
    cout << "Name: " << name << endl;
    cout << "Id: " << id << endl;
    cout << "CGPA: " << cgpa << endl;
  }
};

int main() {
  Student s1("Sojib", 5, 3.9);
  Student s2("Karim", 6, 3.6);
  Student s3("Nahid", 7, 3.1);

  s1.printInfo();
  s2.printInfo();
  s3.printInfo();

  return 0;
}