#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> points;
set<int> xs, ys;
int a, b, N, B, arr[4], temp1, temp2, ans = INT_MAX;

int wherep(pair<int, int>& p) {
  if (p.first > a) {
    if (p.second > b) {
      return 0;
    }
    return 1;
  } else {
    if (p.second > b) {
      return 2;
    }
    return 3;
  }
}
int main() {
  freopen("balancing.in", "r", stdin);
  freopen("balancing.out", "w", stdout);
  scanf("%d %d", &N, &B);
  for (int i = 0; i < N; i++) {
    scanf("%d %d", &temp1, &temp2);
    xs.insert(temp1);
    ys.insert(temp2);
    points.push_back({temp1, temp2});
  }

  for (int k : xs) {
    a = k + 1;
    for (int j : ys) {
      b = j + 1;
      memset(arr, 0, sizeof arr);
      for (pair<int, int> p : points) {
        arr[wherep(p)]++;
      }
      int mtmans = arr[0];
      for (int i = 1; i <= 3; i++) {
        mtmans = max(mtmans, arr[i]);
      }
      ans = min(ans, mtmans);
    }
  }
  printf("%d\n", ans);
}