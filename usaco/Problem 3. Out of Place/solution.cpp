#include <bits/stdc++.h>
using namespace std;
int n, temp, ans = -1;
vector<int> arr, sor;

int main() {
  freopen("outofplace.in", "r", stdin);
  freopen("outofplace.out", "w", stdout);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    arr.push_back(temp);
    sor.push_back(temp);
  }
  sort(sor.begin(), sor.end());
  for (int a = 0; a < n; a++)
    if (sor[a] != arr[a]) ans++;
  ans = max(0, ans);
  printf("%d", ans);
}