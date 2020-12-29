#include <bits/stdc++.h>
#define pis pair<int, string>

using namespace std;

int main() {
  freopen("notlast.in", "r", stdin);
  freopen("notlast.out", "w", stdout);

  int m1 = INT_MAX, m2 = INT_MAX, mt, n;
  string cn2, cnt;
  map<string, int> mk;
  mk["Bessie"], mk["Elsie"], mk["Daisy"], mk["Gertie"];
  mk["Annabelle"], mk["Maggie"], mk["Henrietta"];
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    cin >> cnt >> mt;
    mk[cnt] += mt;
  }
  for (pair<string, int> i : mk) m1 = min(m1, i.second);

  bool tie = 0;
  for (pair<string, int> i : mk) {
    if (i.second > m1 && i.second <= m2) {
      if (i.second == m2)
        tie = 1;
      else
        tie = 0;
      m2 = i.second;
      cn2 = i.first;
    }
  }
  if (cn2 == "" || tie) cn2 = "Tie";
  printf("%s\n", cn2.c_str());
}