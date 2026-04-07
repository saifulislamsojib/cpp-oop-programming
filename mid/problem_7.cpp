#include <iostream>

using namespace std;

class Math {
public:
  const double PI = 3.1416;

  int add(int a, int b) { return a + b; }

  int add(int a, int b, int c) { return a + b + c; }

  double add(double a, double b) { return a + b; }
};

int main() {
  Math math;

  cout << "PI: " << math.PI << endl;
  cout << "Add1: " << math.add(10, 12) << endl;
  cout << "Add2: " << math.add(12, 20, 31) << endl;
  cout << "Add3: " << math.add(13.5, 12.7) << endl;
}