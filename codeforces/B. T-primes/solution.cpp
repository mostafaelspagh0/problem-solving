#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

const int MAXN = 1e6 + 6;
bool prime[MAXN];

set<ll> tprime;

void sieve() {
  memset(prime, 1, sizeof prime);
  prime[0] = prime[1] = 0;
  for (int i = 2; i * i < MAXN; i++) {
    if (prime[i]) {
      for (int j = i * i; j < MAXN; j += i) {
        prime[j] = 0;
      }
    }
  }
  for (int i = 2; i < MAXN; i++) {
    if (prime[i]) {
      tprime.insert(1ll * i * i);
    }
  }
}

int main() {
  sieve();
  int n;
  ll x;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%lld", &x);
    puts(tprime.count(x) ? "YES" : "NO");
  }
}