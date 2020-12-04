#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  scanf("%d", &T);
  int n, m, r, c;
  while (T--) {
    scanf("%d %d %d %d", &n, &m, &r, &c);
    printf("%d\n", max({(r - 1 + c - 1), (n - r + m - c), (r - 1 + m - c),
                        (n - r + c - 1)}));
  }
}