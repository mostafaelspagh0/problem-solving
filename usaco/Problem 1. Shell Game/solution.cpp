#include <bits/stdc++.h>

using namespace std;

int n, a, b, ans, guess[3], order[3];
int main() {
  freopen("shell.in", "r", stdin);
  freopen("shell.out", "w", stdout);
  scanf("%d", &n);

  for (int i = 0; i < 3; i++) order[i] = i;

  while (n--) {
    scanf("%d %d %d", &a, &b, &ans);
    a--, b--, ans--;
    swap(order[a], order[b]);
    guess[order[ans]]++;
  }

  printf("%d", max({guess[0], guess[1], guess[2]}));
}