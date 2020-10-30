#include <bits/stdc++.h>
using namespace std;
int main() {
  long long len;
  cin >> len;
  long long arr[len + 1] = {};
  long long cum[len + 1] = {};
  long long t = 0;
  long long type, r, l;
  for (int i = 1; i <= len; i++) {
    cin >> arr[i];
    t += arr[i];
    cum[i] = t;
  }
  sort(arr, arr + len + 1);
  for (int i = 1; i <= len; i++) {
    arr[i] += arr[i - 1];
  }
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> type >> l >> r;
    l = l - 1;
    switch (type) {
      case 1:
        cout << (cum[r] - cum[l]) << "\n";
        break;
      case 2:
        cout << (arr[r] - arr[l]) << "\n";
        break;
    }
  }
}
