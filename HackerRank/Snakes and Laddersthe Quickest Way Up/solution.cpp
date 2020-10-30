#include <bits/stdc++.h>
using namespace std;

int bfs(map<int, int> &LadderSnacke) {
	vector<bool> vis(110, false);
	queue<pair<int, int>> q;
	pair<int, int> p;
	q.push({1, 0});
	vis[1] = true;
	while (!q.empty()) {
		p = q.front();
		if (p.first == 100) {
			return p.second;
		}
		q.pop();
		for (int i = 1; i <= 6; ++i) {
			int x = p.first + i;
			if (x <= 100) {
				if (!vis[x]) {
					vis[x] = true;
					if (!LadderSnacke.count(x))
						q.push({x, p.second + 1});
					else {
						x = LadderSnacke[x];
						vis[x] = true;
						q.push({x, p.second + 1});
					}
				}
			}
		}
	}
	return -1;
}

int main() {
	int t;
	scanf("%d", &t);
	while (t--) {
		map<int, int> graph;
		int n, temp1, temp2;
		scanf("%d", &n);
		while (n--) {
			scanf("%d %d", &temp1, &temp2);
			graph[temp1] = temp2;
		}
		scanf("%d", &n);
		while (n--) {
			scanf("%d %d", &temp1, &temp2);
			graph[temp1] = temp2;
		}
		printf("%d\n", bfs(graph));
	}
}