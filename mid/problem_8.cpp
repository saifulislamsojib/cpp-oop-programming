#include <iostream>

using namespace std;

double area(double r) { return M_PI * r * r; };
double area(double a, double b) { return a * b; };
double area(double a, double b, int _c) { return 0.5 * a * b; };

int main() {
  double c = area(5.6);
  double r = area(12.3, 13.4);
  double t = area(13.4, 14.3, 1);

  cout << "Area of circle: " << c << endl;
  cout << "Area of rectangle: " << r << endl;
  cout << "Area of triangle: " << t << endl;
}