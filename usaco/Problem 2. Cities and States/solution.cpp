#include <bits/stdc++.h>
using namespace std;

char t1[100], t2[100];
string str1, str2;
map<pair<string, string>, int> m;
int N, ans = 0;
int main() {
  freopen("citystate.in", "r", stdin);
  freopen("citystate.out", "w", stdout);
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%s %s", t1, t2);
    str1 = t1;
    str1 = str1.substr(0, 2);
    str2 = t2;
    if (str1 != str2) {
      ans += m[{str2, str1}];
      m[{str1, str2}] += 1;
    }
  }
  printf("%d", ans);
}