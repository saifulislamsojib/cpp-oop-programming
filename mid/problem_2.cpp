#include <iostream>

using namespace std;

class Rectangle {
private:
  double length;
  double width;

public:
  Rectangle(double l, double w) {
    length = l;
    width = w;
  }

  double area() { return length * width; }
  double perimeter() { return 2 * (length + width); }
};

int main() {
  Rectangle r1(10.5, 20.4);
  Rectangle r2(20.2, 18.3);

  double a1 = r1.area();
  double p1 = r1.perimeter();

  cout << "R1 Area: " << a1 << " and perimeter: " << p1 << endl;

  double a2 = r2.area();
  double p2 = r2.perimeter();

  cout << "R2 Area: " << a2 << " and perimeter: " << p2 << endl;
  return 0;
}