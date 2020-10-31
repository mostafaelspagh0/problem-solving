#include <bits/stdc++.h>
using namespace std;
int a[500005];
int n, k;
bool valid1(int x) {
  long long sum = 0;
  for (int i = 1; i <= n; i++)
    if (a[i] > x) sum += a[i] - x;
  return sum <= k;
}
int valid2(int x) {
  long long sum = 0;
  for (int i = 1; i <= n; i++)
    if (a[i] < x) sum += x - a[i];
  return sum <= k;
}
int main() {
  long long sum = 0;
  cin >> n >> k;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  sort(a + 1, a + 1 + n);
  int l = a[1], r = a[n];
  int mid = l + r >> 1;
  int tmp1, tmp2;
  while (l <= r) {
    mid = l + r >> 1;
    if (valid1(mid))
      r = mid - 1;
    else
      l = mid + 1;
    tmp1 = l;
  }
  l = a[1], r = a[n];
  while (l <= r) {
    mid = l + r >> 1;
    if (valid2(mid))
      l = mid + 1;
    else
      r = mid - 1;
    tmp2 = r;
  }
  int tmps = (sum % n == 0) ? 0 : 1;
  int ans = max(tmps, tmp1 - tmp2);
  cout << ans << "\n";
}