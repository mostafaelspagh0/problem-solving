#include <iostream>
using namespace std;
int main() {
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  int misha =
      ((3 * a / 10) > (a - (a / 250) * c)) ? (3 * a / 10) : (a - (a / 250) * c);
  int vasya =
      ((3 * b / 10) > (b - (b / 250) * d)) ? (3 * b / 10) : (b - (b / 250) * d);
  if (misha == vasya) {
    cout << "Tie";
  } else if (misha > vasya) {
    cout << "Misha";
  } else {
    cout << "Vasya";
  }
}