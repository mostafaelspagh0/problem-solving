#include <bits/stdc++.h>
using namespace std;
vector<pair<int, int>> arr;
int n, temp1, temp2;
int main() {
  freopen("cowqueue.in", "r", stdin);
  freopen("cowqueue.out", "w", stdout);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &temp1, &temp2);
    arr.push_back({temp1, temp2});
  }
  sort(arr.begin(), arr.end());
  int curr = 0;
  for (pair<int, int> p : arr) {
    curr = max(curr, p.first);
    curr += p.second;
  }
  printf("%d", curr);
}