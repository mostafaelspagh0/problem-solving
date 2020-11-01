#include <bits/stdc++.h>
#define N 100005
using namespace std;
int d, ans, n;
vector<int> graph[N];
bool hasCat[N];
bool visit[N];
void solve(int i, int cats) {
  if (cats + (int)hasCat[i] > d) return;
  if (visit[i]) return;
  visit[i] = 1;
  if (graph[i].size() == 1 && i != 1) {
    ans++;
    return;
  }
  for (int j = 0; j < (int)graph[i].size(); j++) {
    if (hasCat[i]) {
      solve(graph[i][j], cats + 1);
    } else {
      solve(graph[i][j], 0);
    }
  }
}
int main() {
  int t1, t2;
  cin >> n >> d;
  for (int i = 1; i <= n; i++) {
    cin >> hasCat[i];
  }
  for (int i = 1; i < n; i++) {
    cin >> t1 >> t2;
    graph[t1].push_back(t2);
    graph[t2].push_back(t1);
  }
  solve(1, 0);
  cout << ans;
}
