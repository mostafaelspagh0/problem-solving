#include <iostream>
using namespace std;
int main() {
  int n, m;
  int d = 0;
  cin >> n >> m;
  while (true) {
    d += 1;
    n -= 1;
    if (d % m == 0) {
      n += 1;
    }
    if (n == 0) {
      break;
    }
  }
  cout << d;
}