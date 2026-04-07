#include "iostream"

using namespace std;

class Parson {
private:
  string name;
  int age;
  static int count;

public:
  Parson(string n, int a) {
    name = n;
    age = a;
    count++;
  }
  string getName() { return name; }
  static int getCount() { return count; }
};

int Parson::count;

int main() {
  Parson p1 = Parson("Sojib", 20);
  Parson p2 = Parson("NNN", 18);

  cout << Parson::getCount();

  return 0;
}