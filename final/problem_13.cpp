#include <iostream>

using namespace std;

class BankAccount {
protected:
  string accountNumber;
  double balance;

public:
  BankAccount(string accNum, double bal) {
    accountNumber = accNum;
    balance = bal;
  }

  virtual void deposit(double amount) = 0;
  virtual void withdraw(double amount) = 0;

  void showBalance() const {
    cout << "Account: " << accountNumber << " | Balance: $" << balance << endl;
  }
};

class SavingsAccount : public BankAccount {
private:
  static const double MIN_BALANCE;

public:
  SavingsAccount(string accNum, double bal) : BankAccount(accNum, bal) {}

  void deposit(double amount) override {
    balance += amount;
    cout << "[Savings] Deposited $" << amount << endl;
    showBalance();
  }

  void withdraw(double amount) override {
    if (balance - amount < MIN_BALANCE) {
      cout << "[Savings] Withdrawal denied. Minimum balance of $" << MIN_BALANCE
           << " must be maintained." << endl;
    } else {
      balance -= amount;
      cout << "[Savings] Withdrew $" << amount << endl;
      showBalance();
    }
  }
};

const double SavingsAccount::MIN_BALANCE = 500.0;

class CurrentAccount : public BankAccount {
private:
  static const double OVERDRAFT_LIMIT;

public:
  CurrentAccount(string accNum, double bal) : BankAccount(accNum, bal) {}

  void deposit(double amount) override {
    balance += amount;
    cout << "[Current] Deposited $" << amount << endl;
    showBalance();
  }

  void withdraw(double amount) override {
    if (balance - amount < -OVERDRAFT_LIMIT) {
      cout << "[Current] Withdrawal denied. Overdraft limit of $"
           << OVERDRAFT_LIMIT << " exceeded." << endl;
    } else {
      balance -= amount;
      cout << "[Current] Withdrew $" << amount << endl;
      showBalance();
    }
  }
};

const double CurrentAccount::OVERDRAFT_LIMIT = 1000.0;

int main() {
  SavingsAccount savings("SAV-001", 1000.0);
  CurrentAccount current("CUR-001", 500.0);

  cout << "=== Savings Account ===" << endl;
  savings.deposit(200);
  savings.withdraw(600);
  savings.withdraw(500);

  cout << "\n=== Current Account ===" << endl;
  current.deposit(300);
  current.withdraw(2000);
  current.withdraw(1200);

  return 0;
}