#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, t, temp;
  while (cin >> n && n != 0) {
    int w = 0, temp = 0;
    for (int i = 0; i < n; i++) {
      cin >> t;
      temp += t;
      if (temp > w) {
        w = temp;
      }
      if (temp < 0) {
        temp = 0;
      }
    }
    if (w > 0) {
      cout << "The maximum winning streak is " << w << ".\n";
    } else {
      cout << "Losing streak.\n";
    }
  }
  return 0;
}