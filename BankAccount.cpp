#include <iostream>

using namespace std;

class BankAccount {
private:
  static int serial;
  int accountNumber = serial;
  double balance;

public:
  BankAccount(double b) {
    balance = b;
    serial++;
  }
  BankAccount() {
    balance = 0;
    serial++;
  }
  void deposit(double amount) { balance += amount; }
  void withdraw(double amount) {
    if (balance < amount) {
      cout << "balance not available amount: " << amount << endl;
      return;
    }
    balance -= amount;
  }
  void display() {
    cout << "Account: " << accountNumber << ", Balance: " << balance << endl;
  }
};

int BankAccount::serial = 1;

int main() {
  BankAccount b1;
  BankAccount b2 = BankAccount(500);
  BankAccount b3 = BankAccount(100);

  b1.display();
  b2.display();
  b3.display();
  cout << endl;

  b1.deposit(100);
  b2.deposit(120);
  b3.deposit(140);

  b1.display();
  b2.display();
  b3.display();
  cout << endl;

  b1.withdraw(50);
  b2.withdraw(200);
  b3.withdraw(300);
  cout << endl;
  b1.display();
  b2.display();
  b3.display();
}