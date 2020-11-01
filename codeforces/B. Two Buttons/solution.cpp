#include <bits/stdc++.h>
using namespace std;
int n, m, t;
bool vis[10004] = {};
int level[10004] = {};
int BFS() {
  queue<int> q;
  q.push(n);
  vis[n] = 1;
  while (q.size()) {
    t = q.front();
    q.pop();
    if (t == m) return level[t];
    if (t * 2 < 10004 && !vis[t * 2]) {
      q.push(t * 2);
      level[t * 2] = level[t] + 1;
      vis[t * 2] = 1;
    }
    if (t - 1 > 0 && !vis[t - 1]) {
      q.push(t - 1);
      level[t - 1] = level[t] + 1;
      vis[t - 1] = 1;
    }
  }
  return -1;
}

int main() {
  cin >> n >> m;
  cout << BFS();
}