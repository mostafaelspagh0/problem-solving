#include <bits/stdc++.h>
using namespace std;

int K, N, X;

int solve(int x) {
  int currTime = 0, inc = 0, dec = 0, acc = 0;
  while (true) {
    acc++;
    inc += acc;
    currTime++;
    if (inc + dec >= K) return currTime;
    if (acc >= x) {
      dec += acc;
      currTime++;
      if (inc + dec >= K) {
        return currTime;
      }
    }
  }
  return 0;
}

int main() {
  freopen("race.in", "r", stdin);
  freopen("race.out", "w", stdout);
  scanf("%d %d", &K, &N);
  for (int i = 0; i < N; i++) {
    scanf("%d", &X);
    printf("%d\n", solve(X));
  }
}