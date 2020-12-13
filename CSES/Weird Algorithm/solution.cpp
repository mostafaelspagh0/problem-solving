#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
int main() {
  scanf("%lld", &n);
  while (n != 1) {
    printf("%lld ", n);
    if (n & 1)
      n = (3ll * n) + 1ll;
    else
      n /= 2ll;
  }
  printf("1");
  return 0;
}