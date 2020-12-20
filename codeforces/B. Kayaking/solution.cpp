#include <bits/stdc++.h>
using namespace std;
int n, temp, sum, sign, ans;
int main() {
  vector<int> arr;

  scanf("%d", &n);
  n *= 2;
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    arr.push_back(temp);
  }

  sort(arr.begin(), arr.end());
  ans = INT_MAX;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      sum = 0;
      sign = -1;
      for (int k = 0; k < n; k++) {
        if (k == i || k == j) continue;
        sum += sign * arr[k];
        sign *= -1;
      }
      ans = min(ans, sum);
    }
  }
  printf("%d\n", ans);
  return 0;
}
