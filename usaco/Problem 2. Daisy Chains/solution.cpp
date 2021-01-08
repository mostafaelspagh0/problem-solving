#include <bits/stdc++.h>
using namespace std;
const int MAX = 111;
int arr[MAX], n, ans = 0, total, i, j;
bool valid(const int a) { return a * (j - i + 1) == total; }
int main() {
  scanf("%d", &n);
  for (i = 0; i < n; i++) scanf("%d", arr + i);
  for (i = 0; i < n; i++)
    for (j = i; j < n; j++) {
      total = accumulate(arr + i, arr + j + 1, 0);
      ans += any_of(arr + i, arr + j + 1, valid);
    }
  printf("%d", ans);
}