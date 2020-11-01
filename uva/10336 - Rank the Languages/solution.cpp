#include <bits/stdc++.h>
#define N 110

using namespace std;
pair<char, int> ans[26];
char grid[N][N];
bool vis[N][N];
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int t, h, w;

bool valid(int i, int j) {
  if (i >= h || i < 0 || j < 0 || j >= w || vis[i][j]) {
    return false;
  } else {
    return true;
  }
}
void dfs(int i, int j) {
  if (valid(i, j)) {
    vis[i][j] = 1;
    for (int d = 0; d < 4; d++) {
      if (valid(i + dx[d], j + dy[d]) &&
          grid[i][j] == grid[i + dx[d]][j + dy[d]]) {
        dfs(i + dx[d], j + dy[d]);
      }
    }
  }
}

bool cmp(pair<char, int> f, pair<char, int> s) {
  if (f.second == s.second) {
    return (f.first < s.first);
  }
  return (f.second > s.second);
}

int main() {
  freopen("input.txt", "r", stdin);
  cin >> t;
  int kd = 0;
  while (t--) {
    for (int i = 0; i < 26; i++) ans[i] = {(char)i + 'a', 0};

    cin >> h >> w;
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> grid[i][j];
        vis[i][j] = 0;
      }
    }
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        if (!vis[i][j]) {
          ans[(int)grid[i][j] - (int)'a'].second += 1;
          dfs(i, j);
        }
      }
    }
    sort(ans, ans + 26, cmp);
    printf("World #%d\n", ++kd);
    for (int i = 0; i < 26; i++) {
      if (ans[i].second > 0) printf("%c: %d\n", ans[i].first, ans[i].second);
    }
  }
}
