#include <bits/stdc++.h>
using namespace std;
const int MAX = 1e3 + 3;
const int MOD = 1e9 + 7;
typedef long long ll;
ll comb[MAX][MAX];
void build_nCr() {  // O(n^2)
  comb[0][0] = 1;
  for (int i = 1; i < MAX; i++) {
    comb[i][0] = 1;
    for (int j = 1; j <= i; j++) {
      comb[i][j] = comb[i - 1][j] + comb[i - 1][j - 1];
      comb[i][j] %= MOD;
    }
  }
}

ll __pow(ll base, ll power, ll mod = MOD) {
  base %= mod;
  ll result = 1;

  while (power > 0) {
    if (power & 1) {  // power % 2 == 1
      result = (result * base) % mod;
    }
    base = (base * base) % mod;
    power >>= 1;  // power = power / 2;
  }
  return result;
}

int main() {
  freopen("galactic.in", "r", stdin);
  build_nCr();
  int t, n, k, ans, step;
  scanf("%d", &t);
  while (t--) {
    ans = 0;
    scanf("%d %d", &n, &k);
    if (n >= k) {
      for (int i = 0; i <= k; i++) {
        step = (comb[k][i] * __pow((k - i), n)) % MOD;
        if (i % 2)
          ans = (ans - step + MOD) % MOD;
        else
          ans = (ans + step) % MOD;
      }
    }
    printf("%d\n", ans);
  }
}