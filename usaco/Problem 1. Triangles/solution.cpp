#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> arr;

int area(pair<int, int> a, pair<int, int> b, pair<int, int> c) {
  if (a.first == b.first) {
    if (b.second == c.second) {
      return abs(a.second - b.second) * abs(b.first - c.first);
    } else if (a.second == c.second) {
      return abs(a.second - b.second) * abs(a.first - c.first);
    }
  } else if (b.first == c.first) {
    if (c.second == a.second) {
      return abs(b.second - c.second) * abs(c.first - a.first);
    } else if (a.second == b.second) {
      return abs(b.second - c.second) * abs(a.first - b.first);
    }
  } else if (a.first == c.first) {
    if (a.second == b.second) {
      return abs(a.second - c.second) * abs(a.first - b.first);
    } else if (a.second == b.second) {
      return abs(a.second - c.second) * abs(c.first - b.first);
    }
  }
  return -1;
}
int main() {
  freopen("triangles.in", "r", stdin);
  freopen("triangles.out", "w", stdout);
  int temp1, temp2, n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &temp1, &temp2);
    arr.push_back(make_pair(temp1, temp2));
  }
  int ans = 0;
  for (int i = 0; i < arr.size(); i++)
    for (int j = 0; j < arr.size(); j++)
      for (int k = 0; k < arr.size(); k++) {
        if (i == j || j == k || i == k) continue;
        ans = max(ans, area(arr[i], arr[j], arr[k]));
      }
  printf("%d", ans);
}