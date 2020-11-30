#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt", "r", stdin);
  int T, i, temp, caseN = 0;
  bool ans;
  scanf("%d", &T);

  while (T--) {
    ans = 0;
    for (i = 0; i < 3 && !ans; i++) scanf("%d", &temp), ans = temp > 20;
    for (; i < 3; i++) scanf("%*d");
    printf("Case %d: %s\n", ++caseN, (ans ? "bad" : "good"));
  }
}