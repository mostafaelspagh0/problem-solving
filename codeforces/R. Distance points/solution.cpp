#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%lf ", hypot(a - c, b - d));
}