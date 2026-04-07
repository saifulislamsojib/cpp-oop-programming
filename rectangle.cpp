#include <iostream>

using namespace std;

class Rectangle {
private:
  double length;
  double breadth;

public:
  Rectangle(double l, double b) {
    length = l;
    breadth = b;
  }

  double calculateArea() { return length * breadth; }
  double calculatePerimeter() { return (length + breadth) * 2; }
};

int main() {
  double length, breadth;
  cin >> length >> breadth;

  Rectangle r1 = Rectangle(length, breadth);

  cout << "Area: " << r1.calculateArea();
  cout << "\nPerimeter: " << r1.calculatePerimeter();
  return 0;
}
