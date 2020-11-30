#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt", "r", stdin);
  int n, account = 0, temp;
  char c;
  scanf("%d\n", &n);
  while (n--) {
    scanf("%c %*s ", &c);
    if (c == 'r')
      printf("%d\n", account);
    else
      scanf("%d\n", &temp), account += temp;
  }
}