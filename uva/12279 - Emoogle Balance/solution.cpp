#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt","r",stdin);
  int n, temp, ans, caseN = 0;
  while (scanf("%d", &n), (n > 0)) {
    ans = 0;
    while (n--) {
      scanf("%d", &temp);
      if (temp == 0)
        ans -= 1;
      else
        ans += 1;
    }
    printf("Case %d: %d\n", ++caseN, ans);
  }
}