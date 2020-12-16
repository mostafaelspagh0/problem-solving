#include <bits/stdc++.h>

using namespace std;

int arr[1000];
int main() {
  int T, n, temp, ans;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) scanf("%d", arr + i);
    ans = arr[0] + arr[1] + 1;
    for (int i = 1; i <= n; i++)
      for (int j = i + 1; j <= n; j++)
        ans = min(ans, arr[i - 1] + arr[j - 1] + j - i);
    printf("%d\n",ans);
  }
}