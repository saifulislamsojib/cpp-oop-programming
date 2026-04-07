#include <iostream>

using namespace std;

class Box {
private:
  double length, width, height;

public:
  Box(double l, double w, double h) {
    length = l;
    width = w;
    height = h;
  }

  friend void calculateVolume(Box b);
};

void calculateVolume(Box b) {
  double volume = b.length * b.width * b.height;
  cout << "Volume of the Box = " << volume << endl;
}

int main() {
  Box b1(10, 20, 30);
  calculateVolume(b1);

  return 0;
}