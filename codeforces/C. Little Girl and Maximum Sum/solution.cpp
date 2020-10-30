#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  int arr[n];
  int orders[n] = {};
  long long sum = 0;
  int l, r;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for (int i = 0; i < q; i++) {
    cin >> l >> r;
    orders[l - 1] += 1;
    orders[r] += -1;
  }
  for (int i = 1; i < n; i++) {
    orders[i] += orders[i - 1];
  }
  sort(arr, arr + n);
  sort(orders, orders + n);
  for (int i = 0; i < n; i++) {
    sum += (long long)arr[i] * orders[i];
  }
  cout << sum;
}