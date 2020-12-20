#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> arr;

int n, x, a;
int l, r;
bool hasPair() {
  sort(arr.begin(), arr.end());
  l = 0;
  r = arr.size() - 1;

  while (l < r) 
    if (arr[l].first + arr[r].first == x) return 1;
    else if (arr[l].first + arr[r].first < x) l++;
    else r--;

  return 0;
}
int main() {
  scanf("%d %d", &n, &x);
  for (int i = 1; i <= n; i++) {
    scanf("%d", &a);
    arr.push_back({a, i});
  }
  if (hasPair())
    printf("%d %d", arr[l].second, arr[r].second);
  else
    printf("IMPOSSIBLE");
}