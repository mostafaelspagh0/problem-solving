#include <bits/stdc++.h>
using namespace std;
long long a, b, q;

int main() {
  scanf("%lld %lld %lld", &a, &b, &q);

  if (q % 3 == 1) {
    printf("%lld", a);
  } else if (q % 3 == 2) {
    printf("%lld", b);
  } else {
    printf("%lld", a^b);
  }
}
