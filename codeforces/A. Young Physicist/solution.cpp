#include <iostream>
using namespace std;
int main(void) {
  int number;
  cin >> number;
  int xt, yt, zt, x = 0, y = 0, z = 0;
  for (int i = 0; i < number; i++) {
    cin >> xt >> yt >> zt;
    x += xt;
    y += yt;
    z += zt;
  }
  if (x == y && z == 0 && z == y) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}