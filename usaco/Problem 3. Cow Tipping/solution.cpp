#include <bits/stdc++.h>
using namespace std;
char grid[15][15];
int n, ans;
int flib(int i, int j) {
  for (int a = 0; a <= i; a++)
    for (int b = 0; b <= j; b++) grid[a][b] = (grid[a][b] == '1') ? '0' : '1';
  return 1;
}

int main() {
  freopen("cowtip.in", "r", stdin);
  freopen("cowtip.out", "w", stdout);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%s", grid[i]);
  ans = 0;
  for (int i = n - 1; i >= 0; i--)
    for (int j = n - 1; j >= 0; j--)
      if (grid[i][j] == '1') ans += flib(i, j);

  printf("%d", ans);
}