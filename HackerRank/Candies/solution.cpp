// https://www.hackerrank.com/challenges/candies/problem

#include <bits/stdc++.h>

using namespace std;

int main() {
	vector<int> rates;
	int n, temp;
	long long ans = 0, tmp = 0;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		rates.push_back(temp);
	}
	vector<long long> values(n);
	values[0] = 1;

	for (int i = 1; i < n; i++) {
		if (rates[i] > rates[i - 1]) {
			values[i] = values[i - 1] + 1;
		} else {
			values[i] = 1;
		}
	}

	ans = values[n - 1];

	for (int i = n - 2; i >= 0; i--) {
		if (rates[i] > rates[i + 1]) {
			tmp = values[i + 1] + 1;
		} else {
			tmp = 1;
		}
		ans += max(tmp, values[i]);
		values[i] = tmp;
	}
	printf("%lld", ans);

	return 0;
}
