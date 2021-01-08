#include <bits/stdc++.h>
using namespace std;
int const MAX = 1003;
int n, k, ans, temp_ans;
array<int, MAX> arr;
int main() {
  freopen("diamond.in", "r", stdin);
  freopen("diamond.out", "w", stdout);
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) scanf("%d", &arr[i]);
  sort(begin(arr), arr.begin() + n);
  for (int i = 0; i < n; i++) {
    temp_ans = 1;
    for (int j = i + 1; j < n; j++) {
      if (abs(arr[j] - arr[i]) <= k) {
        temp_ans++;
      }
    }
    ans = max(temp_ans, ans);
  }

  printf("%d", ans);
}