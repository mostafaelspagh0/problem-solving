#include <iostream>
using namespace std;
int reverseo(int n) {
  int ret = 0, mul = 10, rem, haha;
  while (n > 0) {
    rem = n % mul;
    n -= rem;
    haha = (((float)rem / mul) * 10);
    ret = (ret * 10) + haha;
    mul *= 10;
  }
  return ret;
}
int main() {
  int n, f, s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> f >> s;
    cout << reverseo(reverseo(f) + reverseo(s)) << endl;
  }
  return 0;
}