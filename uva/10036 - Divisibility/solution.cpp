#include <bits/stdc++.h>
using namespace std;
int n, k;
const int MAX_n = 10004;
int dp[10005][110];
int arr[MAX_n];
int solve(int idx, int mysum) {
  if (mysum < 0) mysum += k;
  if (idx == n) return (mysum % k == 0);
  if (dp[idx][mysum] != -1) return dp[idx][mysum];
  return dp[idx][mysum] = solve(idx + 1, (mysum + arr[idx]) % k) ||
                          solve(idx + 1, (mysum - arr[idx]) % k);
}
int main() {
  int t, temp;
  scanf("%d", &t);
  while (t--) {
    memset(dp, false, sizeof(dp));
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; i++) {
      scanf("%d", &temp);
      arr[i] = abs(temp);
    }
    memset(dp, -1, sizeof(dp));
    if (solve(0, 0))
      printf("Divisible\n");
    else
      printf("Not divisible\n");
  }
}