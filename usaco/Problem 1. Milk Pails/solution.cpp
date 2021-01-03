#include <bits/stdc++.h>
using namespace std;

int main() {
  freopen("pails.in", "r", stdin);
  freopen("pails.out", "w", stdout);
  int x, y, m, ans = 0, temp;
  scanf("%d %d %d", &x, &y, &m);
  for (int i = 0; i < 1111; i++) {
    for (int j = 0; j < 1111; j++) {
      temp = (i * x + j * y);
      if (temp > ans && temp <= m) {
        ans = temp;
      }
    }
  }
  printf("%d", ans);
}