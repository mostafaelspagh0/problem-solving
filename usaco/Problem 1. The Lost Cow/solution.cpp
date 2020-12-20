#include <bits/stdc++.h>

using namespace std;

long long x, y, currFactor = 0, factor = 1, sign = 1;

int main() {
  freopen("lostcow.in", "r", stdin);
  freopen("lostcow.out", "w", stdout);
  scanf("%lld %lld", &x, &y);
  while (!(x <= y && sign == 1 && y <= x + factor) &&
         !(x - factor <= y && sign == -1 && y <= x)) {
    currFactor += factor * 2;
    factor *= 2;
    sign *= -1;
  }
  printf("%lld", currFactor += abs(y - x));
}