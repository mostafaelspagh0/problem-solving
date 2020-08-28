// http://codeforces.com/problemset/problem/115/A

#include <bits/stdc++.h>

using namespace std;

vector<int> adj[2004];
int maxGroup = 1;

void dfs(int start, int count) {
	maxGroup = max(count, maxGroup);
	for (int i : adj[start]) {
		dfs(i, count + 1);
	}
}
int main() {
	int n, temp;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &temp);
		if (temp == -1)
			continue;
		adj[temp].push_back(i);
	}
	for (int i = 1; i <= n; i++) {
		dfs(i, 1);
	}
	cout << maxGroup << endl;
}