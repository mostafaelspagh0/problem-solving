#include <bits/stdc++.h>
using namespace std;
set<int> adj[200006];
int shortPath[200006];
void bfs(int s, int m) {
	int k = m - 1;
	queue<int> q;
	int p;
	q.push(s);
	shortPath[s] = 0;
	while (!q.empty() && k > 0) {
		p = q.front();
		q.pop();
		for (int i = 1; i <= m; ++i) {
			if (!adj[p].count(i) && shortPath[i] == -1) {
				q.push(i);
				shortPath[i] = shortPath[p] + 1;
				k -= 1;
			}
		}
	}
}
int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, m, temp1, temp2, s;
		memset(shortPath, -1, sizeof shortPath);
		scanf("%d %d", &m, &n);
		for (int i = 0; i < n; i++) {
			scanf("%d %d", &temp1, &temp2);
			adj[temp1].insert(temp2);
			adj[temp2].insert(temp1);
		}
		scanf("%d", &s);
		bfs(s, m);
		for (int i = 1; i <= m; i++) {
			adj[i].clear();
			if (i == s)
				continue;
			printf("%d ", shortPath[i]);
		}
		printf("\n");
	}
}