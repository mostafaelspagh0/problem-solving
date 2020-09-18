#include <bits/stdc++.h>
using namespace std;

int MOD = 1e9 + 7;
int N = 100000;
int dpTable[100006];

int main() {
  int t, k;
  scanf("%d%d", &t, &k);
  dpTable[0] = 1;
  for (int i = 1; i <= N; i++) {
    dpTable[i] = dpTable[i - 1];
    if (i >= k) {
      dpTable[i] += dpTable[i - k];
      dpTable[i] %= MOD;
    }
  }
  for (int i = 1; i <= N; i++) {
    dpTable[i] += dpTable[i - 1];
    dpTable[i] %= MOD;
  }

  int a, b;
  while (t--) {
    scanf("%d%d", &a, &b);
    printf("%d\n", (dpTable[b] - dpTable[a - 1] + MOD) % MOD);
  }
  return 0;
}