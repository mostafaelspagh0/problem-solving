#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  int ans = 0;
  int rec = 0;
  int temp = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (temp == -1) {
      if (rec <= 0) {
        ans += 1;
      } else {
        rec -= 1;
      }
    } else {
      rec += temp;
    }
  }
  cout << ans;
}