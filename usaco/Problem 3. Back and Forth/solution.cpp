#include <bits/stdc++.h>
using namespace std;
int buckets[20], f_farm[20], s_farm[20];
set<int> possibles;
void solve(int a, int b, int x) {
  if (x == 4) {
    possibles.insert(a);
    return;
  }
  if (x % 2 == 0) {
    for (int i = 0; i < 20; i++) {
      if (f_farm[i] == 1) {
        f_farm[i] = 0;
        s_farm[i] = 1;
        solve(a - buckets[i], b + buckets[i], x + 1);
        f_farm[i] = 1;
        s_farm[i] = 0;
      }
    }
  } else {
    for (int i = 0; i < 20; i++) {
      if (s_farm[i] == 1) {
        s_farm[i] = 0;
        f_farm[i] = 1;
        solve(a + buckets[i], b - buckets[i], x + 1);
        s_farm[i] = 1;
        f_farm[i] = 0;
      }
    }
  }
}
int main() {
  freopen("backforth.in", "r", stdin);
  freopen("backforth.out", "w", stdout);
  int i = 0;
  memset(f_farm, 0, sizeof f_farm);
  memset(s_farm, 0, sizeof s_farm);
  for (; i < 20; ++i) scanf("%i", buckets + i);
  for (i = 0; i < 10; ++i) f_farm[i] = 1;
  for (; i < 20; ++i) s_farm[i] = 1;
  solve(1000, 1000, 0);
  printf("%i", (int)possibles.size());
}