#include <bits/stdc++.h>
using namespace std;
int main() {
  int l, r, x, y, k;
  long long temp;
  bool flag = true;
  scanf("%d %d %d %d %d", &l, &r, &x, &y, &k);
  for (int b = x; flag && b <= y; b++) {
    long long temp = (long long)b * k;
    if (l <= temp && temp <= r) flag = false;
  }
  puts((flag ? "NO" : "YES"));
}