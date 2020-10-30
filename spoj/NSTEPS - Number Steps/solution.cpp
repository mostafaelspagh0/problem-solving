#include <iostream>
using namespace std;
int main(void) {
  int i;
  cin >> i;
  int x, y;
  for (i; i > 0; i--) {
    cin >> x >> y;
    if (x == y) {
      if (x % 2 == 0) {
        cout << x * 2 << "\n";
      } else {
        cout << x * 2 - 1 << "\n";
      }
    } else if (y == x - 2) {
      if (x % 2 == 0) {
        cout << x + y << "\n";
      } else {
        cout << x + y - 1 << "\n";
      }
    } else {
      cout << "No Number"
           << "\n";
    }
  }
}
