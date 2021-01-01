#include <bits/stdc++.h>
using namespace std;

int lv[2010][2010], x = 1000, y = 1000, t = 0, s, ans = 999999, n;
char d[4];
void move(int dx, int dy, int s) {
  for (int i = 0; i < s; i++) {
    x += dx;
    y += dy;
    t += 1;
    if (lv[x][y] >= 0) ans = min(ans, t - lv[x][y]);
    lv[x][y] = t;
  }
}

int main() {
  freopen("mowing.in", "r", stdin);
  freopen("mowing.out", "w", stdout);
  memset(lv, -1, sizeof lv);
  lv[x][y] = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s %d", d, &s);
    if (strcmp(d, "N") == 0)
      move(-1, 0, s);
    else if (strcmp(d, "S") == 0)
      move(1, 0, s);
    else if (strcmp(d, "W") == 0)
      move(0, -1, s);
    else if (strcmp(d, "E") == 0)
      move(0, 1, s);
  }
  if (ans == 999999) {
    printf("%d\n", -1);

  } else {
    printf("%d\n", ans);
  }
}
