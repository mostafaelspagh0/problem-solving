// https://www.hackerrank.com/challenges/marcs-cakewalk/problem
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
	sort(arr.rbegin(), arr.rend());

	long long ans = 0ll;
	long long temp2;
	for (int i = 0; i < arr.size(); i++) {
		temp2 = pow(2, i);
		temp2 *= arr[i];
		ans += temp2;
	}
	cout << ans << endl;
}