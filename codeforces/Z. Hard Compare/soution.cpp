#include <bits/stdc++.h>
using namespace std;
int main() {
  long long a, b, c, d;
  scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
  double x, y;
  x = (double)b * log2(a);
  y = (double)d * log2(c);
  puts((x > y ? "YES" : "NO"));
}