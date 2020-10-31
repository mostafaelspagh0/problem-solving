#include <bits/stdc++.h>
using namespace std;
int n;
map<int, string> value;
int main() {
  for (int i = 59; i > 0; i--) {
    for (int j = i; j > 0; j--) {
      if (i == j) continue;
      value[i * i * i - j * j * j] = to_string(i) + " " + to_string(j) + "\n";
    }
  }
  while (cin >> n) {
    if (n == 0) break;
    if (value.count(n)) {
      cout << value[n];
    } else {
      cout << "No solution\n";
    }
  }
  return 0;
}