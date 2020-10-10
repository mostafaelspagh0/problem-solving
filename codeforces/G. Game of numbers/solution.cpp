#include <bits/stdc++.h>
using namespace std;

int nums[1003];
int memo[1003][1003];
int n, k;
string ans = "";

int solve(int idx, int sum, string s) {
  if (sum > k || sum < 0) return memo[idx][sum];
  if (ans.size() < s.size()) ans = s;
  if (idx == n) return idx;
  if (memo[idx][sum] != -1) return memo[idx][sum];
  return memo[idx][sum] = max({idx, solve(idx + 1, sum - nums[idx], s + "-"),
                               solve(idx + 1, sum + nums[idx], s + "+")});
}

int main() {
  memset(memo, -1, sizeof memo);
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    scanf("%d", nums + i);
  }
  cout << solve(0, 0, "") << endl << ans;
}