#include <bits/stdc++.h>
using namespace std;

long long dptable[100];
long long fib(long long n) {
  if (n <= 2) return n - 1;
  if (dptable[n] != -1) return dptable[n];
  dptable[n] = fib(n - 1) + fib(n - 2);
  return dptable[n];
}
int main() {
  memset(dptable, -1, sizeof dptable);
  int n;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    printf("%lld ", fib(i));
  }
}