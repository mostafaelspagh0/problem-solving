#include <bits/stdc++.h>
using namespace std;
int nums[100005];
int main() {
  int n, m;
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &nums[i]);
  }
  int sum = 0;
  int curr_ans = 0;
  int ans = 0;
  for (int i = 0, j = 0; i < n; i++) {
    for (; j < n; j++) {
      if (sum + nums[j] > m) {
        break;
      }
      sum += nums[j];
    }
    curr_ans = j - i;
    ans = max(ans, curr_ans);
    sum -= nums[i];
  }
  printf("%d\n", ans);
}