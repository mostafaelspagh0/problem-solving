#include <bits/stdc++.h>

long long Log2n(long long n) { return (n > 1) ? 1 + Log2n(n / 2) : 0; }

int main() {
  long long n;
  scanf("%lld", &n);
  printf("%lld", Log2n(n));
  return 0;
}
