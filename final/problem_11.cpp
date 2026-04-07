#include <iostream>

using namespace std;

class Account {
private:
  double balance;

public:
  Account(double bal) { balance = bal; }

  friend class Bank;
};

class Bank {
public:
  void displayBalance(Account acc) {
    cout << "Account Balance: tk. " << acc.balance << endl;
  }
};

int main() {
  Account acc(5000.75);
  Bank bank;
  bank.displayBalance(acc);
  return 0;
}