#include <bits/stdc++.h>
using namespace std;

const int N = 1000000;

int xis[N], tasteness[N], rest[N];
int main() {
  freopen("reststops.in", "r", stdin);
  freopen("reststops.out", "w", stdout);
  int l, n, rf, rb, last_pos = 0, last_max = 0;
  long long time_fj = 0, time_bessi = 0, ans = 0;
  scanf("%d %d %d %d", &l, &n, &rf, &rb);
  memset(rest, 0, sizeof rest);
  for (int i = 0; i < n; ++i) scanf("%d %d", xis + i, tasteness + i);
  for (int i = n - 1; i >= 0; --i) if (tasteness[i] > last_max) rest[i] = 1, last_max = tasteness[i];
  for (int i = 0; i < n; i++) if (rest[i]) {
      time_fj += (xis[i] - last_pos) * ((long long)rf);
      time_bessi += (xis[i] - last_pos) * ((long long)rb);
      ans += (time_fj - time_bessi) * ((long long)tasteness[i]);
      time_bessi = time_fj;
      last_pos = xis[i];
    }
  printf("%lld", ans);
}