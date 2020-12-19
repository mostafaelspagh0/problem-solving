#include <bits/stdc++.h>

using namespace std;
int n, m, i, j, roadunit = 1, temp, score, road[105];
int main() {
  freopen("speeding.out", "w", stdout);
  freopen("speeding.in", "r", stdin);
  scanf("%d %d", &n, &m);
  memset(road, 0, sizeof road);
  int last = 1;
  for (i = 0; i < n; i++) {
    scanf("%d %d", &j, &temp);
    road[last] -= temp;
    last += j;
    road[last] += temp;
  }
  last = 1;
  for (i = 0; i < m; i++) {
    scanf("%d %d", &j, &temp);
    road[last] += temp;
    last += j;
    road[last] -= temp;
  }
  for (int i = 1; i < 101; i++) road[i] += road[i - 1];
  score = 0;
  for (i = 1; i < 101; i++) score = max(score, road[i]);
  printf("%d", score);
  return 0;
}