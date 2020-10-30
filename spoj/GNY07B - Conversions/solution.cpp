#include <iostream>

using namespace std;

int main() {
  int n;
  double value, kg = 2.2046, lb = 0.4536, l = 0.2642, g = 3.7854;
  string haha, lala;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> value;
    getline(cin, haha);
    if (" kg" == haha) {
      lala = "lb";
      value = value * kg;
    } else if (haha == " l") {
      lala = "g";
      value = value * l;
    } else if (haha == " lb") {
      lala = "kg";
      value = value * lb;
    } else if (haha == " g") {
      lala = "l";
      value = value * g;
    }
    printf("%d %.4f %s\n", i, value, lala.c_str());
  }
}
