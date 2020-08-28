// https://www.hackerrank.com/challenges/even-tree/problem
#include <bits/stdc++.h>
using namespace std;

vector<int> graph[110];
bool visited[110];
int numNodes[110];
int ans = 0;

int dfs(int node) {
	visited[node] = true;
	int numChildren = 0, nextNode = 0;
	for (int i : graph[node]) {
		if (!visited[i]) {
			nextNode = dfs(i);
			if (nextNode % 2 == 0) {
				ans += 1;
				continue;
			}
			numChildren += nextNode;
		}
	}
	numNodes[node] = numChildren + 1;
	return numNodes[node];
}
int main() {
	int n, m, temp1, temp2;
	scanf("%d %d", &n, &m);
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &temp1, &temp2);
		graph[temp1].push_back(temp2);
		graph[temp2].push_back(temp1);
	}
	dfs(1);

	printf("%d", ans);
}