#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N = 3e4 + 3;
int n, t, i, a, arr[N];
vector<int> adj[N];
bool visit[N];
void DFS(int u) {
  visit[u] = 1;
  arr[i] = u;
  i++;
  for (int v : adj[u]) {
    if (!visit[v]) DFS(v);
  }
}
int main() {
  scanf("%d %d", &n, &t);
  for (int i = 1; i < n; ++i) {
    scanf("%d", &a);
    adj[i].push_back(i + a);
  }
  DFS(1);
  for (int j = 0; j < i; ++j) {
    if (t == arr[j]) {
      printf("YES");
      return 0;
    }
  }
  printf("NO");
  return 0;
}