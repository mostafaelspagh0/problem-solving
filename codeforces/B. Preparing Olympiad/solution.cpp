#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, l, r, x;
  int arr[30];
  scanf("%d %d %d %d", &n, &l, &r, &x);
  for (int i = 0; i < n; i++) {
    scanf("%d", arr + i);
  }
  int mask = 1 << n;
  int ans = 0;
  for (int i = 0; i < mask; i++) {
    int low(1000000), high(-1), sum(0);
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        sum += arr[j];
        high = max(high, arr[j]);
        low = min(low, arr[j]);
      }
    }
    if ((high - low) >= x && l <= sum && sum <= r) {
      ans += 1;
    }
  }
  printf("%d", ans);
}