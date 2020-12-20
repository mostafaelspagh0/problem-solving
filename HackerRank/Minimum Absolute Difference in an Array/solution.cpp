// https://www.hackerrank.com/challenges/minimum-absolute-difference-in-an-array/problem
#include <bits/stdc++.h>
using namespace std;
int main() {
	int n, temp;
	scanf("%d", &n);
	vector<int> arr;
	for (int i = 0; i < n; i++) {
		scanf("%d", &temp);
		arr.push_back(temp);
	}
	sort(arr.begin(), arr.end());
	int ans = INT_MAX;
	for (int i = 1; i < n; i++) {
		ans = min(ans, abs(arr[i] - arr[i - 1]));
	}
	printf("%d", ans);
}