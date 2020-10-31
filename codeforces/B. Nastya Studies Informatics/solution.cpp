#include <bits/stdc++.h>
using namespace std;

long long lcm(long long a, long long b) { return a * b / __gcd(a, b); }

int main() {
  vector<int> factors;
  int l, r, x, y, ans = 0;
  scanf("%d %d %d %d", &l, &r, &x, &y);
  for (int i = 1; i * i <= y; i++)
    if (y % i == 0) {
      if (l <= i && i <= r) factors.push_back(i);
      if (i * i != y && l <= y / i && y / i <= r) factors.push_back(y / i);
    }
  for (int i = 0; i < factors.size(); i++)
    for (int j = 0; j < factors.size(); j++)
      if (__gcd(factors[i], factors[j]) == x &&
          lcm(factors[i], factors[j]) == y)
        ans++;
  printf("%d", ans);
}