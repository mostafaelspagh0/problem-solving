#include <bits/stdc++.h>
using namespace std;
int n, temp, arr[40];
long long first, second, ans = LONG_LONG_MAX;

int main() {
  scanf("%d", &n);
  for (long long i = 0; i < n; i++) scanf("%d", &arr[i]);
  for (long long mask = 0; mask <= (1 << n); mask++) {
    first = 0, second = 0;
    for (long long j = 0; j < n; ++j)
      ((mask & (1 << j)) != 0) ? first += arr[j] : second += arr[j];
    ans = min(abs(first - second), ans);
  }
  printf("%lld", ans);
}