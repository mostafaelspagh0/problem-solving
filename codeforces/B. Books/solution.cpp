#include <bits/stdc++.h>
using namespace std;
int n, t, cum[100005] = {}, sum = 0, ans = 0, temp;

int getSum(int l, int r) {
  if (l == 0) return cum[r];
  return cum[r] - cum[l - 1];
}

int bs(int r) {
  int low = 0, high = r, mid, ans = 0;
  while (low <= high) {
    mid = (low + high) / 2;
    if (getSum(mid, r) <= t) {
      high = mid - 1;
      ans = r - (mid - 1);
    } else {
      low = mid + 1;
    }
  }
  return ans;
}

int main() {
  scanf("%d %d", &n, &t);
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    sum += temp;
    cum[i] = sum;
    ans = max(ans, bs(i));
  }
  printf("%d", ans);
}