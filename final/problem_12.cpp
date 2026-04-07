#include <iostream>

using namespace std;

const double PI = 3.14159;

// Abstract base class
class Shape {
public:
  virtual double area() = 0;
};

// Derived class: Circle
class Circle : public Shape {
private:
  double radius;

public:
  Circle(double r) { radius = r; }

  double area() override { return PI * radius * radius; }
};

// Derived class: Rectangle
class Rectangle : public Shape {
private:
  double length, width;

public:
  Rectangle(double l, double w) {
    length = l;
    width = w;
  }

  double area() override { return length * width; }
};

int main() {
  double r, l, w;

  cout << "Enter radius of Circle: ";
  cin >> r;
  Circle c(r);
  cout << "Circle Area = " << c.area() << endl;

  cout << "Enter length and width of Rectangle: ";
  cin >> l >> w;
  Rectangle rect(l, w);
  cout << "Rectangle Area = " << rect.area() << endl;

  return 0;
}