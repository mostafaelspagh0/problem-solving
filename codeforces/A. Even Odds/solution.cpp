#include <iostream>
using namespace std;
int main() {
  long long i, k, even, odd, ki;
  cin >> i >> k;
  ki = k;
  even = i / 2;
  odd = i / 2;
  if (i % 2 != 0) odd += 1;
  if (k > odd) k -= odd;
  if (ki > odd) {
    k = k * 2;
  } else {
    k = (k * 2) - 1;
  }
  cout << k << "\n";
}