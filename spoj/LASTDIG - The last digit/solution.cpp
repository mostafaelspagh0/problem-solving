#include <math.h>

#include <iostream>
using namespace std;

int main() {
  int n, a, haha, haha2;
  long int b;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b;
    if (a == 0) {
      cout << 0 << endl;
      continue;
    }
    if (b == 0) {
      cout << 1 << endl;
      continue;
    }
    haha = (b % 4 == 0) ? 4 : b % 4;
    haha2 = pow(a, haha);
    cout << haha2 % 10 << endl;
  }
}
