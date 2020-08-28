// https://onlinejudge.org/index.php?option=onlinejudge&Itemid=8&page=show_problem&problem=3344
#include <bits/stdc++.h>

using namespace std;

#include <bits/stdc++.h>

using namespace std;

int grid[550][550];
int maxSize, minPosition;
int n, m, q, qfirst, qsecond;

bool valid(int row, int col) {
	return col >= 0 && row >= 0 && col < m && row < n &&
	       grid[row][col] <= qsecond && grid[row][col] >= qfirst;
}

int main(void) {

	while (scanf("%d %d", &n, &m) && n || m) {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				scanf("%d", grid[i] + j);
			}
		}

		scanf("%d", &q);

		while (q--) {
			scanf("%d %d", &qfirst, &qsecond);
			maxSize = 0;
			for (int i = 0; i < n; i++) {
				minPosition =
				    lower_bound(grid[i], grid[i] + m, qfirst) -
				    grid[i];
				for (int j = maxSize; j < n; j++) {
					if (valid(i + j, minPosition + j)) {
						maxSize = max(maxSize, j + 1);
					} else {
						break;
					}
				}
			}
			printf("%d\n", maxSize);
		}
		printf("-\n");
	}

	return 0;
}