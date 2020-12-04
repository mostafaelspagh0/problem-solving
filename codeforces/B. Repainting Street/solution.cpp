#include <bits/stdc++.h>
using namespace std;

int a[1000000];
set<int> nums;
int main() {
  int T;
  scanf("%d", &T);
  int n, k, ans;
  while (T--) {
    nums.clear();
    scanf("%d %d", &n, &k);
    for (int i = 1; i <= n; i++) {
      scanf("%d", &a[i]);
      nums.insert(a[i]);
    }
    int ret = 0;
    ans = INT_MAX;
    for (int i : nums) {
      ret = 0;
      for (int j = 1; j <= n; j++) {
        if (a[j] != i) {
          ret += 1;
          j += k - 1;
        }
      }
      ans = min(ret, ans);
    }
    printf("%d\n", ans);
  }
}