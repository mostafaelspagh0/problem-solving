// https://www.hackerrank.com/challenges/password-cracker/problem
#include <bits/stdc++.h>

using namespace std;
bool solve(int idx, string &loginAttempt, vector<int> &dbTable,
	   set<string> &passwords, stack<string> &ans) {
	if (dbTable[idx] != -1) {
		return dbTable[idx];
	}
	string temp = "";
	for (int i = idx; i < (int)loginAttempt.size(); i++) {
		temp += loginAttempt[i];

		if (passwords.count(temp) &&
		    solve((i + 1), loginAttempt, dbTable, passwords, ans)) {
			dbTable[idx] = true;
			ans.push(temp);
			return true;
		}
	}
	dbTable[idx] = false;
	return false;
}
int main() {
	int T;
	scanf("%d", &T);
	while (T--) {
		int n;
		string temp;
		scanf("%d", &n);
		set<string> passwords;
		while (n--) {
			cin >> temp;
			passwords.insert(temp);
		}
		string loginAttempt;
		cin >> loginAttempt;
		vector<int> dpTable(loginAttempt.size() + 5, -1);
		stack<string> ans;
		dpTable[loginAttempt.size()] = true;
		if (solve(0, loginAttempt, dpTable, passwords, ans)) {
			while (!ans.empty()) {
				cout << ans.top();
				ans.pop();
				if (!ans.empty()) {
					cout << " ";
				}
			}

		} else {
			printf("WRONG PASSWORD");
		}
		if (T) {
			cout << endl;
		}
	}
}