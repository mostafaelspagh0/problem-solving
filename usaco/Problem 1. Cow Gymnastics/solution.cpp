#include <bits/stdc++.h>
using namespace std;

vector<int> arr[200];
int n, k, temp;

bool valid(int i, int j) {
  if (i == j) return false;
  for (int _ = 0; _ < n; _++) {
    int i_i = -1, j_i = -1;
    for (int x = 0; x < k; x++) {
      if (arr[_][x] == i)
        i_i = x;
      else if (arr[_][x] == j)
        j_i = x;
      if (i_i != -1 && j_i != -1) break;
    }
    if (i_i > j_i) return false;
  }
  return true;
}
int main() {
  freopen("gymnastics.in", "r", stdin);
  freopen("gymnastics.out", "w", stdout);
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < k; j++) {
      scanf("%d", &temp);
      arr[i].push_back(temp);
    }
  }

  int ans = 0;
  for (int i = 1; i <= k; i++) {
    for (int j = 1; j <= k; j++) {
      ans += valid(i, j);
    }
  }
  printf("%d", ans);
}