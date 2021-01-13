#include <bits/stdc++.h>
using namespace std;

int Bessie[110], Elsie[110], Mildred[110], N, d, r, ans = 0, tem;
char temp[100];
bool last[3], curr[3];

int main(void) {
  freopen("measurement.in", "r", stdin);
  freopen("measurement.out", "w", stdout);
  string name;
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%d %s %d", &d, temp, &r);
    name = temp;
    if (name[0] == 'B')
      Bessie[d] += r;
    else if (name[0] == 'E')
      Elsie[d] += r;
    else
      Mildred[d] += r;
  }
  Bessie[1] += 7;
  Elsie[1] += 7;
  Mildred[1] += 7;
  partial_sum(Bessie, Bessie + 105, Bessie);
  partial_sum(Elsie, Elsie + 105, Elsie);
  partial_sum(Mildred, Mildred + 105, Mildred);
  tem = max({Bessie[0], Elsie[0], Mildred[0]});
  last[0] = Bessie[0] == tem;
  last[1] = Elsie[0] == tem;
  last[2] = Mildred[0] == tem;
  for (int i = 1; i <= 100; i++) {
    tem = max({Bessie[i], Elsie[i], Mildred[i]});
    curr[0] = Bessie[i] == tem;
    curr[1] = Elsie[i] == tem;
    curr[2] = Mildred[i] == tem;
    ans += (last[0] ^ curr[0] || last[1] ^ curr[1] || last[2] ^ curr[2]);
    swap(last, curr);
  }

  printf("%d", ans);
  return 0;
}