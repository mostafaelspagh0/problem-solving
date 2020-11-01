#include <bits/stdc++.h>

using namespace std;
#define Max 10004
int n, m;
bool vis[Max];
vector<int> adj[Max];
void dfs(int ch) {
  if (vis[ch]) return;
  vis[ch] = 1;
  for (int i = 0; i < (int)adj[ch].size(); i++) dfs(adj[ch][i]);
}
int main() {
  int compNum = 0;
  int t1, t2;
  cin >> n >> m;
  for (int i = 0; i < m; i++) {
    cin >> t1 >> t2;
    adj[t1].push_back(t2);
    adj[t2].push_back(t1);
  }
  if (m == n - 1) {
    for (int i = 1; i <= n; i++) {
      if (!vis[i]) {
        compNum++;
        if (compNum > 1) {
          puts("NO");
          break;
        }
        dfs(i);
      }
    }
    if (compNum == 1) {
      puts("YES");
    }
  } else {
    puts("NO");
  }
  return 0;
}
