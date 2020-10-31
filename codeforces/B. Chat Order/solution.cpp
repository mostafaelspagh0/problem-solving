#include <bits/stdc++.h>
using namespace std;

int main() {
  set<string> uniqe;
  vector<string> s;
  string temp;
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    cin >> temp;
    s.push_back(temp);
  }
  for (auto it = s.rbegin(); it != s.rend(); ++it) {
    if (uniqe.count(*it) == 0) {
      cout << *it << "\n";
      uniqe.insert(*it);
    }
  }
}