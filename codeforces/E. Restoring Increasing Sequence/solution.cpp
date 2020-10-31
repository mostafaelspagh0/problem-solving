// https://codeforces.com/contest/490/problem/E
#include <bits/stdc++.h>
using namespace std;

void addsol(int x, string &s, vector<int> &modStack) {
	for (int i = modStack.size() - 1; i >= 0; i--) {
		char c = '0' + (x % 10);
		s[modStack[i]] = c;
		x /= 10;
	}
}

bool valid(int x, string &current, string &prev, vector<int> &modStack) {
	addsol(x, current, modStack);
	return stoi(current) > stoi(prev);
}

int main() {
	int n;
	string temp;
	vector<string> arr;
	vector<string> ans = {"YES"};
	scanf("%d", &n);
	while (n--) {
		cin >> temp;
		arr.push_back(temp);
	}
	string prev = arr[0];
	string current;
	for (int j = 0; j < prev.size(); j++) {
		if (prev[j] == '?') {
			if (j == 0) {
				prev[j] = '1';
			} else {
				prev[j] = '0';
			}
		}
	}
	ans.push_back(prev);
	for (int i = 1; i < arr.size(); i++) {
		current = arr[i];
		if (prev.size() > current.size()) {
			cout << "NO";
			return 0;
		} else if (prev.size() < current.size()) {
			for (int j = 0; j < current.size(); j++) {
				if (current[j] == '?') {
					if (j == 0) {
						current[j] = '1';
					} else {
						current[j] = '0';
					}
				}
			}

			ans.push_back(current);

		} else {
			vector<int> modStack;
			bool flag = false;
			for (int j = 0; j < current.size(); j++) {
				if (current[j] == '?') {
					modStack.push_back(j);
				}
			}
			if (modStack.empty()) {
				if (stoi(current) > stoi(prev)) {
					ans.push_back(current);
				} else {
					cout << "NO";
					return 0;
				}
			} else {

				int low = 0, high = 10, mid, res = -1;

				for (int k = 1; k < modStack.size(); k++) {
					high *= 10;
				}
				high -= 1;
				while (low <= high) {
					mid = (low + high) / 2;
					if (valid(mid, current, prev,
						  modStack)) {
						res = mid;
						high = mid - 1;
					} else {
						low = mid + 1;
					}
				}
				if (res == -1) {
					cout << "NO";
					return 0;
				}
				addsol(res, current, modStack);
				if (stoi(current) > stoi(prev)) {
					ans.push_back(current);
				} else {
					cout << "NO";
					return 0;
				}
			}
		}
		prev = current;
	}
	for (string s : ans) {
		cout << s << endl;
	}
}