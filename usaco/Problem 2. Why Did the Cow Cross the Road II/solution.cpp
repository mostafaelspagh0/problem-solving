#include <bits/stdc++.h>
using namespace std;

map<char, pair<int, int>> m;

int main() {
  freopen("circlecross.in", "r", stdin);
  freopen("circlecross.out", "w", stdout);
  string str;
  cin >> str;
  for (int i = 0; i < str.size(); i++) {
    char c = str[i];
    if (m.count(c))
      m[c] = {m[c].first, i};
    else
      m[c] = {i, -1};
  }
  int ans = 0;
  pair<int, int> f, s;
  for (char i = 'A'; i <= 'Z'; i++) {
    for (char j = 'A'; j <= 'Z'; j++) {
      if (i == j) continue;
      f = m[i];
      s = m[j];
      if (f.first < s.first && f.second < s.second && f.second > s.first) {
        ans++;
      }
    }
  }
  printf("%d", ans);
}