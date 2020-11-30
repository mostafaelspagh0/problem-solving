#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int T, i, tempI;
  int a, b, n;
  scanf("%d", &T);
  while (T--) {
    scanf("%d %d %d", &n, &a, &b);
    if (a > b) swap(a, b);
    for (i = 0; i < n - 2; i++)
      scanf("%d", &tempI), a = min(a, tempI), b = max(b, tempI);
    printf("%d\n", (b - a) * 2);
  }
}