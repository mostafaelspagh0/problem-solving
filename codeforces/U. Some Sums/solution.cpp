#include <bits/stdc++.h>

using namespace std;

int sumDig(int n) {
  int sum = 0;
  while (n != 0) {
    sum = sum + n % 10;
    n = n / 10;
  }
  return sum;
}

int main() {
  int n, a, b;
  scanf("%d %d %d", &n, &a, &b);
  int ans = 0;
  for (int i = 1; i <= n; i++) {
    int x = sumDig(i);
    if (x >= a && x <= b) ans += i;
  }
  printf("%d", ans);
}