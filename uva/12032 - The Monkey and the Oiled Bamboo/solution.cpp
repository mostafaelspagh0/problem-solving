#include <bits/stdc++.h>
using namespace std;
int n, a[100001], t, temp;

bool valid(int value) {
  for (int i = 1; i <= n; i++) {
    int temp = a[i] - a[i - 1];
    if (temp == value) {
      value -= 1;
    } else if (temp > value) {
      return false;
    }
  }
  return true;
}

int bs() {
  int minx = 1, maxx = 10000000, ret = 0;
  while (minx <= maxx) {
    int mid = (minx + maxx) / 2;
    if (valid(mid)) {
      ret = mid;
      maxx = mid - 1;
    } else {
      minx = mid + 1;
    }
  }
  return ret;
}

int main() {
  cin >> t;
  for (int j = 1; j <= t; j++) {
    cin >> n;
    for (int i = 1; i <= n; i++) {
      cin >> a[i];
    }
    a[0] = 0;
    cout << "Case " << j << ": " << bs() << "\n";
  }
}