#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, dist_count = 0, start = 0, ans = INT_MAX;
  string str;
  bool visited[256] = {};
  cin >> n >> str;
  for (int i = 0; i < n; i++) {
    if (!visited[(int)str[i]]) {
      visited[(int)str[i]] = 1;
      dist_count++;
    }
  }
  int sdf = 0;
  int frq[256] = {};
  for (int i = 0; i < n; i++) {
    frq[(int)str[i]]++;
    if (frq[(int)str[i]] == 1) sdf++;
    if (dist_count == sdf) {
      while (frq[(int)str[start]] > 1) {
        if (frq[(int)str[start]] > 1) frq[(int)str[start]]--;
        start++;
      }
      ans = min(i - start + 1, ans);
    }
  }
  cout << ans;
  return 0;
}