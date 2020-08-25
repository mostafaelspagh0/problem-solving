// https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=944
#include <bits/stdc++.h>
using namespace std;
int arr[55], dpTable[55][55];
int partation(int left, int right) {

	int &ans = dpTable[left][right];
	if (ans != -1)
		return ans;

	if (left + 1 == right) // can't partation a partation of size = 1
		return 0;

	ans = INT_MAX;
	for (int i = left + 1; i < right; i++)
		ans = min(ans, partation(left, i) + partation(i, right) +
				   arr[right] - arr[left]);
	return ans;
}
int main() {
	int l, n;
	while (scanf("%d", &l) && l) {
		scanf("%d", &n);
		arr[0] = 0;
		for (int i = 1; i <= n; i++) {
			scanf("%d", arr + i);
		}
		arr[n + 1] = l;
		memset(dpTable, -1, sizeof dpTable);
		printf("The minimum cutting is %d.\n", partation(0, n + 1));
	}
}