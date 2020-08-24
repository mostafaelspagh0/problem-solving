//https://codeforces.com/contest/670/problem/D2
#include <bits/stdc++.h>
using namespace std;
long long n, k;
long long ingr[100005];
long long ingrC[100005];
long long magic;
long long maxCakes = 0;
bool valid(long long value) {
	magic = k;
	for (int i = 0; i < n; i++) {
		if (magic < 0) return false;
		if ((ingrC[i] / ingr[i]) < value) {
			magic -= (ingr[i] * value) - ingrC[i];
		}
	}
	return magic >= 0;
}

long long maxcook() {
	long long x = 0;
	long long low = 0, high = maxCakes;
	long long  mid;
	while (low <= high) {
		mid = (low + high) / 2;
		if (valid(mid)) {
			x = mid;
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	return x;
}
int main() {
	cin >> n >> k;
	for (int i = 0; i < n; i++) {
		cin >> ingr[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> ingrC[i];
		maxCakes = max(maxCakes, ((ingrC[i] + k) / ingr[i]));
	}
	cout << maxcook() << endl;
}
