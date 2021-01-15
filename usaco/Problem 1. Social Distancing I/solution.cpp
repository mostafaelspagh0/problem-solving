#include <bits/stdc++.h>
using namespace std;

vector<int> cows;
int n;

bool valid(int x) {
  int k = x * 2 + 1;
  int p = cows.front() / x + (n - 1 - cows.back()) / x;
  for (int i = 1; i < cows.size() && p < 2; i++)
    p += max(0, ((cows[i] - cows[i - 1]) / x - 1));
  return p >= 2;
}

int solve() {
  int low = 1, high = n - 1, ans;
  for (int i = 1; i < cows.size(); i++) high = min(cows[i] - cows[i - 1], high);
  while (low < high) {
    int mid = (low + high + 1) / 2;
    if (valid(mid)) {
      low = mid;
      ans = mid;
    } else
      high = mid - 1;
  }
  return ans;
}

int main() {
  freopen("socdist1.in", "r", stdin);
  freopen("socdist1.out", "w", stdout);
  scanf("%d\n", &n);
  for (int i = 0; i < n; i++)
    if (getchar() - '0') cows.push_back(i);
  if (cows.empty()) {
    printf("%d", (n - 1));
  } else {
    printf("%d", solve());
  }
}