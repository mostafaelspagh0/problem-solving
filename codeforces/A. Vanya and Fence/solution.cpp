#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, h;
  cin >> n >> h;
  int t;
  int ans = 0;
  for (int i = 0; i < n; i++) {
    cin >> t;
    if (t > h) {
      ans += 2;
    } else {
      ans += 1;
    }
  }
  cout << ans;
}