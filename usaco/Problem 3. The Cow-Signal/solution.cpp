#include <bits/stdc++.h>
using namespace std;

char temp[200];

int main() {
  int n, m, k;
  freopen("cowsignal.in", "r", stdin);
  freopen("cowsignal.out", "w", stdout);
  scanf("%d %d %d\n", &n, &m, &k);
  for (int i = 0; i < n; i++) {
    scanf("%s", temp);
    for (int __ = 0; __ < k; __++) {
      for (int j = 0; j < m; j++)
        for (int _ = 0; _ < k; _++) putchar(temp[j]);
      putchar('\n');
    }
  }
}