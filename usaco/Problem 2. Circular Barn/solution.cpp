#include <bits/stdc++.h>
using namespace std;

int n, temp, curr, ans = INT_MAX;
vector<int> cows;

int main() {
  freopen("cbarn.in", "r", stdin);
  freopen("cbarn.out", "w", stdout);
  scanf("%d", &n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    cows.push_back(temp);
  }

  for (int i = 0; i < n; i++) {
    curr = 0;
    for (int j = 0; j < n; j++) curr += j * cows[(i + j) % n];
    ans = min(ans, curr);
  }

  printf("%d", ans);
}