#include <iostream>

using namespace std;

int main() {
  int x, y, z;
  while (true) {
    cin >> x >> y >> z;
    if (x == 0 && y == 0 && z == 0) break;
    if (y - x == z - y) {
      cout << "AP " << y - x + z << endl;
    } else {
      cout << "GP " << (y / x) * z << endl;
    }
  }
}
