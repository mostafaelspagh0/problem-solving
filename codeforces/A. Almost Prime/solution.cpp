#include <bits/stdc++.h>
#define N 3030
using namespace std;

int numFactors[N + 10];

void seive() {
  for (int i = 2; i <= N; i++) {
    if (numFactors[i] == 0) {
      numFactors[i]++;
      for (int j = i * 2; j <= N; j += i) {
        numFactors[j]++;
      }
    }
  }
}
int main() {
  seive();
  int n, ans = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    if (numFactors[i] == 2) {
      ans++;
    }
  }
  cout << ans;
  return 0;
}