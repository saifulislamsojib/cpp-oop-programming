#include "iostream"

using namespace std;

class Math {
public:
  int add(int a, int b) { return a + b; }
  double add(double a, double b) { return a + b; }

  int add(int a, int b, int c) { return a + b + c; }
  string add(string a, string b) { return a + b; }
};

int main() {
  Math math;
  string name = math.add("Saiful ", "Sojib");
  float sum = math.add(10.33, 20.22);

  cout << "Name: " << name;
  cout << "\nSum: " << sum;

  return 0;
}