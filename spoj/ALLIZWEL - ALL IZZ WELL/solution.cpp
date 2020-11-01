#include <bits/stdc++.h>
using namespace std;

string s = "ALLIZZWELL";
char graph[110][110];
bool visit[110][110];
bool flag;
int h, w;
int dx[8] = {-1, -1, -1, 1, 1, 1, 0, 0};
int dy[8] = {-1, 0, 1, -1, 0, 1, -1, 1};

bool valid(int i, int j) {
  if (i >= h || i < 0 || j < 0 || j >= w || visit[i][j]) {
    return false;
  } else {
    return true;
  }
}
void dfs(int i, int j, int idx) {
  if (valid(i, j)) {
    if (idx == s.size() - 1) {
      flag = true;
      return;
    }
    visit[i][j] = 1;
    for (int d = 0; d < 8; d++) {
      if (valid(i + dx[d], j + dy[d]) &&
          s[idx + 1] == graph[i + dx[d]][j + dy[d]]) {
        dfs(i + dx[d], j + dy[d], idx + 1);
      }
    }
    visit[i][j] = false;
  }
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    flag = false;
    cin >> h >> w;

    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        cin >> graph[i][j];
        visit[i][j] = 0;
      }
    }

    for (int i = 0; i < h && !flag; i++)
      for (int j = 0; j < w && !flag; j++)
        if (graph[i][j] == 'A') dfs(i, j, 0);

    puts((flag ? "YES" : "NO"));
  }
}
