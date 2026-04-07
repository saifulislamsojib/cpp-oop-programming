#include <iostream>

using namespace std;

class Car {
private:
  string brand;
  double price;

public:
  Car(string b, double p) {
    brand = b;
    price = p;
    cout << "Constructor called for brand: " << brand << endl;
  }

  void displayDetails() {
    cout << "Brand: " << brand << endl;
    cout << "Price: " << price << endl;
  }

  ~Car() { cout << "Destructor called for brand: " << brand << endl; }
};

int main() {
  Car c1("Toyota", 1555.2);
  Car c2("BMW", 1333.5);
  Car c3("Tesla", 1333.5);

  c1.displayDetails();
  c2.displayDetails();
  c3.displayDetails();

  return 0;
}