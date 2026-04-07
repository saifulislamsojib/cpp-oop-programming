#include "iostream"

using namespace std;

int main() {
  int n, sum = 0;
  cin >> n;

  for (int i = 2; i <= n; i += 2) {
    sum = sum + i;
  }

  int avg = sum / (n / 2);

  cout << "Avg: " << avg;

  return 0;
}