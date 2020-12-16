#include <bits/stdc++.h>

using namespace std;

int main() {
  int d, y, m;
  scanf("%d", &d);
  y = d / 365;
  d %= 365;
  m = d / 30;
  d %= 30;
  printf("%d years\n%d months\n%d days", y, m, d);
}