#include <bits/stdc++.h>
using namespace std;
int visited[10004];
vector<int> adj[10004];
int mx = -1;
int ik = 0;
void dfs(int node, int level) {
  if (level > mx) {
    mx = level;
    ik = node;
  }
  visited[node] = true;
  for (auto u : adj[node])
    if (!visited[u]) dfs(u, level + 1);
}

int main() {
  int n;
  cin >> n;
  int a, b;
  for (int i = 1; i < n; i++) {
    cin >> a >> b;
    adj[a].push_back(b);
    adj[b].push_back(a);
  }
  dfs(1, 0);
  memset(visited, 0, sizeof(visited));
  dfs(ik, 0);
  cout << mx;
}
