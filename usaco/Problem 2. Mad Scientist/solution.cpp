#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("breedflip.in", "r", stdin);
  freopen("breedflip.out", "w", stdout);
  int n;
  string a, b;
  cin >> n >> a >> b;
  int ans = 0, last = -2;
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      if (last != i - 1) ans++;
      last = i;
    }
  }
  cout << ans;
}