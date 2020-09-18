#include <bits/stdc++.h>
using namespace std;
bool vis[16];
int main() {
  int n, k, temp, temp1;
  scanf("%d %d", &n, &k);
  for (int i = 0; i < n; i++) {
    temp1 = 0;
    for (int j = 0; j < k; j++) {
      scanf("%d", &temp);
      temp1 = (temp1 << 1) + temp;
    }
    vis[temp1] = true;
  }

  for (int i = 0; i < 16; i++) {
    for (int j = i; j < 16; j++) {
      if (vis[i] && vis[j] && ((i & j) == 0)) {
        puts("YES");
        return 0;
      }
    }
  }
  puts("NO");
  return 0;
}