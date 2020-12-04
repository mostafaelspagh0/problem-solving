#include <bits/stdc++.h>
using namespace std;
long long x;
long long calc(long long n) { return (n * (n + 1) / 2); }
int valid(long long n) { return calc(n) >= x; }
long long bs() {
  long long lw = 0, hi = x, mid;
  long long ret = 0;
  while (hi >= lw) {
    mid = (hi + lw) / 2;
    if (valid(mid)) {
      hi = mid - 1;
      ret = mid;
    } else {
      lw = mid + 1;
    }
  }
  return ret;
}
int main() {
  //freopen("input.txt", "r", stdin);
  int T;
  int len;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &x);
    printf("%d\n", bs() + (calc(bs()) == x + 1));
  }
}