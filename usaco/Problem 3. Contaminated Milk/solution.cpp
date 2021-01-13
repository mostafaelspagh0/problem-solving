#include <bits/stdc++.h>
using namespace std;

int N, M, D, S, p, m, t;
map<int, vector<int>> timeTable[1200];
set<int> milk[60];
int main() {
  freopen("badmilk.in", "r", stdin);
  freopen("badmilk.out", "w", stdout);
  scanf("%d %d %d %d", &N, &M, &D, &S);
  for (int i = 0; i < D; i++) {
    scanf("%d %d %d", &p, &m, &t);
    timeTable[t][p].push_back(m);
    milk[m].insert(p);
  }
  for (int i = 0; i < S; i++) {
    scanf("%d %d", &p, &t);
    set<int> prevMilk;
    for (int j = t - 1; j >= 1; j--)
      if (timeTable[j].count(p))
        for (int k : timeTable[j][p]) prevMilk.insert(k);
    for (int k = 1; k <= M; k++)
      if (!prevMilk.count(k)) milk[k].clear();
  }
  int ans = 0;
  for (int i = 1; i <= 50; i++)
    ans = (milk[i].size() > ans) ? milk[i].size() : ans;
  printf("%d", ans);
}