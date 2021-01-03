#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("herding.in", "r", stdin);
  freopen("herding.out", "w", stdout);
  int x, y, m, ans1, ans2;
  scanf("%d %d %d", &x, &m, &y);
  if (min({x, y, m}) != x)
    if (min({x, y, m}) == y)
      swap(x, y);
    else
      swap(x, m);

  if (max(y, m) != y) swap(m, y);

  if (y - m == 2 || m - x == 2)
    ans1 = 1;
  else if (y - m == 1 && m - x == 1)
    ans1 = 0;
  else
    ans1 = 2;

  ans2 = max(m - x - 1, y - m - 1);

  printf("%d\n%d", ans1, ans2);
}