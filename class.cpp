#include "iostream"

using namespace std;

class Student {
private:
  string x = "WOW";

public:
  int age = 10;
  string name = "Sojib";

  void printX() { cout << "\nX is: " << x; }
  void setX(string new_x) { x = new_x; }
  string getX() { return x; }
};

int main() {
  Student sojib;
  sojib.age = 24;
  sojib.name = "Saiful Sojib";
  cout << "Age: " << sojib.age << "\nName: " << sojib.name;
  sojib.printX();
  sojib.setX("Bina Tere");
  cout << "\nNew X is: " << sojib.getX();
  return 0;
}