#include <bits/stdc++.h>
using namespace std;
int x1, ys1, x2, y2, ans = 0;
bool plane[2010][2010];
int main() {
  memset(plane, 0, sizeof plane);
  freopen("billboard.in", "r", stdin);
  freopen("billboard.out", "w", stdout);
  for (int i = 0; i < 2; i++) {
    scanf("%d %d %d %d", &x1, &ys1, &x2, &y2);
    x1 += 1000, ys1 += 1000, x2 += 1000, y2 += 1000;
    for (int i = x1; i < x2; i++)
      for (int j = ys1; j < y2; j++) plane[i][j] = true;
  }

  scanf("%d %d %d %d", &x1, &ys1, &x2, &y2);
  x1 += 1000, ys1 += 1000, x2 += 1000, y2 += 1000;
  for (int i = x1; i < x2; i++)
    for (int j = ys1; j < y2; j++) plane[i][j] = false;

  for (int i = 0; i <= 2000; i++)
    for (int j = 0; j < 2010; j++) ans += plane[i][j];

  printf("%d", ans);
}