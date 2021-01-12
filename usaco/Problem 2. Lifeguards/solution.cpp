#include <bits/stdc++.h>
using namespace std;

int timeTable[1201];

int main() {
  freopen("lifeguards.in", "r", stdin);
  freopen("lifeguards.out", "w", stdout);
  int n, t1, t2;
  vector<pair<int, int>> arr;
  scanf("%d", &n);
  int x = 0;
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &t1, &t2);
    timeTable[t1] += 1;
    timeTable[t2] -= 1;
    arr.push_back(make_pair(t1, t2));
    x = max(x, t2);
  }
  partial_sum(timeTable, timeTable + (x+1), timeTable);
  int ans = 0;
  for (pair<int, int> p : arr) {
    for (int i = p.first; i < p.second; i++) timeTable[i]--;
    int t = 0;
    for (int i = 1; i <= x; i++)
      if (timeTable[i] > 0) t++;
    ans = max(t, ans);
    for (int i = p.first; i < p.second; i++) timeTable[i]++;
  }
  printf("%d", ans);
}