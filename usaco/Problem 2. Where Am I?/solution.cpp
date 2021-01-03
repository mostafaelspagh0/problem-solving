#include <bits/stdc++.h>
using namespace std;

int n;
string st;
string k;
int main() {
  freopen("whereami.in", "r", stdin);
  freopen("whereami.out", "w", stdout);
  scanf("%d", &n);
  cin >> st;
  bool flag = true;
  for (int i = 1; i <= n; i++) {
    set<string> s;
    flag = true;
    for (int l = 0; l < n; l++) {
      k = st.substr(l, i);
      if (s.count(k)) {
        flag = false;
        break;
      } else {
        s.insert(k);
      }
    }
    if (flag) {
      printf("%d", i);
      return 0;
    }
  }
}