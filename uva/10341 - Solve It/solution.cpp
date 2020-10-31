#include <bits/stdc++.h>
using namespace std;
int p, q, r, s, t, u;
double minx, maxx, mid, ans;
double fun(double value) {
  return (p * exp(-1 * value)) + (q * sin(value)) + (r * cos(value)) +
         (s * tan(value)) + (t * (value * value)) + u;
}
bool valid(double value) { return fun(value) > 0; }
void bs() {
  minx = 0, maxx = 1;
  for (int i = 0; i < 200; i++) {
    mid = (minx + maxx) / 2;
    if (valid(mid)) {
      minx = mid;
      ans = mid;
    } else
      maxx = mid;
  }
}
int main() {
  while (cin >> p >> q >> r >> s >> t >> u) {
    bs();
    if (((int)fun(ans) * 10000) == 0) {
      printf("%.4lf\n", ans);
    } else {
      printf("No solution\n");
    }
  }
}