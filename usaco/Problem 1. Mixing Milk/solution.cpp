#include <bits/stdc++.h>

using namespace std;
int capacity[3], state[3], from, to, toValue;
int main() {
  freopen("mixmilk.in","r",stdin);
  freopen("mixmilk.out","w",stdout);
  for (int _ = 0; _ < 3; _++) scanf("%d %d", capacity + _, state + _);
  for (int i = 0; i < 100; i++) {
    from = i % 3;
    to = (from + 1) % 3;
    toValue = min(capacity[to], state[to] + state[from]);
    state[from] -= toValue - state[to];
    state[to] = toValue;
  }
  for (int i = 0; i < 3; i++) printf("%d\n", state[i]);
}