#include <bits/stdc++.h>
using namespace std;
const int N = 100;
int arr[N];
int main() {
  freopen("taming.in", "r", stdin);
  freopen("taming.out", "w", stdout);
  int n, ans_min = 0, ans_max = 0;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) scanf("%d", arr + i);
  for (int i = n - 1; i >= 0; --i)
    if (arr[i] == -1 && arr[i + 1] > 0) arr[i] = arr[i + 1] - 1;
  arr[0] = 0;
  for (int i = 0; i < n; ++i) {
    ans_max += (arr[i] == -1 || arr[i] == 0);
    ans_min += (arr[i] == 0);
    if (arr[i] == -1) arr[i] = 0;
  }
  for (int i = n; i > 0; --i)
    if (arr[i] > 0 && arr[i - 1] != arr[i] - 1) return puts("-1");
  printf("%d %d", ans_min, ans_max);
}