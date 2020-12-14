#include <bits/stdc++.h>
using namespace std;
const int MAXN = 100005;
bool isPrime[MAXN];
void seive() {
  memset(isPrime, true, sizeof isPrime);
  isPrime[1] = false;
  isPrime[0] = false;
  for (int i = 2; i * i < MAXN - 20; i++) {
    if (isPrime[i]) {
      for (int j = 2 * i; j < MAXN; j += i) {
        isPrime[j] = false;
      }
    }
  }
}
int main() {
  seive();
  int k;
  scanf("%d", &k);
  printf((isPrime[k] ? "YES" : "NO"));
}