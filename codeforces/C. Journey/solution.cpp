#include <bits/stdc++.h>
#define N 100005
using namespace std;

vector<int> adj[N];
double ans = 0;
int n, u, v;

void dfs(int vertix, int dist, double probalty, int parent) {
  if (adj[vertix].size() == 1 && vertix != 1) {
    ans += dist * probalty;
  }
  for (int i = 0; i < (int)adj[vertix].size(); i++) {
    if (adj[vertix][i] == parent) continue;
    dfs(adj[vertix][i], dist + 1,
        probalty / (adj[vertix].size() - (vertix != 1)), vertix);
  }
}

int main() {
  scanf("%d", &n);
  for (int i = 1; i < n; i++) {
    scanf("%d %d", &u, &v);
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  dfs(1, 0, 1, -1);
  printf("%.15lf", ans);
}
