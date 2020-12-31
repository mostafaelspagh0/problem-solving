#include <bits/stdc++.h>
using namespace std;
char grid[10][10];
int main() {
  freopen("buckets.in", "r", stdin);
  freopen("buckets.out", "w", stdout);

  int sx, sy, ex, ey, rx, ry;

  for (int i = 0; i < 10; i++) scanf("%s", grid[i]);

  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (grid[i][j] == 'B') {
        sx = i;
        sy = j;
      } else if (grid[i][j] == 'L') {
        ex = i;
        ey = j;
      } else if (grid[i][j] == 'R') {
        rx = i;
        ry = j;
      }
    }
  }

  if ((sx == ex && ex == rx && min(sy, ey) <= ry && ry <= max(sy, ey)) ||
      (sy == ey && ey == ry && min(sx, ex) <= rx && rx <= max(ex, sx)))
    printf("%d", abs(sx - ex) + abs(sy - ey) + 1);
  else
    printf("%d", abs(sx - ex) + abs(sy - ey) - 1);
}