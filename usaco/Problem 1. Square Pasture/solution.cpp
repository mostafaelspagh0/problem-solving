#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("square.in", "r", stdin);
  freopen("square.out", "w", stdout);
  int xa1, xa2, xb1, xb2, ya1, ya2, yb1, yb2, x;
  scanf("%d %d %d %d\n%d %d %d %d", &xa1, &ya1, &xb1, &yb1, &xa2, &ya2, &xb2,
        &yb2);
  x = max((max({xa1, xa2, xb1, xb2}) - min({xa1, xa2, xb1, xb2})),
          (max({ya1, ya2, yb1, yb2}) - min({ya1, ya2, yb1, yb2})));
  printf("%lld", (long long)x * x);
}