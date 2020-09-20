// https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2445
#include <bits/stdc++.h>
using namespace std;

vector<int> clothes[22];
int dp[220][22];
int k, mymoney;
int solve(int spentMoney, int idx) {
  if (spentMoney > mymoney) return -2;
  if (idx == k) return spentMoney;
  int &ret = dp[spentMoney][idx];
  if (ret != -1) return ret;
  ret = -2;
  for (int i : clothes[idx]) {
    if (solve(spentMoney + i, idx + 1) != -2)
      ret = max(solve(spentMoney + i, idx + 1), ret);
  }
  return ret;
}

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    memset(dp, -1, sizeof dp);
    scanf("%d %d", &mymoney, &k);
    for (int i = 0; i < k; i++) {
      int temp, nk;
      scanf("%d", &nk);
      for (int j = 0; j < nk; j++) {
        scanf("%d", &temp);
        clothes[i].push_back(temp);
      }
    }

    if (solve(0, 0) == -2) {
      puts("no solution");
    } else {
      cout << solve(0, 0) << endl;
    }
    for (int i = 0; i < k; i++) {
      clothes[i].clear();
    }
  }
}