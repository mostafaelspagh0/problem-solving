#include <bits/stdc++.h>
using namespace std;
long long dptable[30003];
int main() {
  double t;
  int currency[] = {10000, 5000, 2000, 1000, 500, 200, 100, 50, 20, 10, 5};
  dptable[0] = 1;
  for (int j : currency) {
    for (int i = 1; i <= 30003; i++) {
      if (i >= j) {
        dptable[i] += dptable[i - j];
      }
    }
  }
  int a , b  ;
  while (scanf("%d.%d", &a, &b)&& a | b ) {
    float inp = a + b / (float)100;
    printf("%6.2f%17lld\n", inp, dptable[a * 100 + b]);
  }
}