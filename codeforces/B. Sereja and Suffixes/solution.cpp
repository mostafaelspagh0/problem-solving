#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m, t;
  cin >> n >> m;
  map<int, int> countmap;
  long long cum[n + 1] = {};
  int arr[n];

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    countmap[arr[i]] += 1;
  }
  int k = countmap.size();
  for (int i = 0; i < n; i++) {
    cum[i] = k;
    countmap[arr[i]] -= 1;
    if (countmap[arr[i]] == 0) {
      k -= 1;
    }
  }
  for (int i = 0; i < m; i++) {
    cin >> t;
    cout << cum[t - 1] << "\n";
  }
}
