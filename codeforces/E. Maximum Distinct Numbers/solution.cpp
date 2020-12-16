#include <bits/stdc++.h>
using namespace std;

unsigned long long n;

bool valid(unsigned long long k) { return (k * (k + 1) / 2) <= n; }
unsigned long long bs() {
  unsigned long long lw = 0ll, hi = 2000000000ll, mi, ans;
  while (hi >= lw) {
    mi = (lw + hi) / 2;
    if (valid(mi)) {
      ans = mi;
      lw = mi + 1;
    } else {
      hi = mi - 1;
    }
  }
  return ans;
}

int main() {
  scanf("%lld", &n);
  printf("%lld", bs());
}