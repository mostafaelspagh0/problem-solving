#include <bits/stdc++.h>
using namespace std;
map< long long,  long long> m;
int main() {
  long long n;
  long long o, p1, p2;
  scanf("%lld", &n);
  while (n--) {
    scanf("%lld", &o);
    if (!o) {
      scanf("%lld %lld", &p1, &p2);
      m[p1] = p2;
    } else {
      scanf("%lld", &p1);
      printf("%lld\n", m[p1]);
    }
  }
}