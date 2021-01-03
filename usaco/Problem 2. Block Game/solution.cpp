#include <bits/stdc++.h>
using namespace std;
int n;
int frq[30], frq1[30], frq2[30];
string f, s;
int main() {
  freopen("blocks.in", "r", stdin);
  freopen("blocks.out", "w", stdout);
  scanf("%d", &n);
  memset(frq, 0, sizeof frq);
  for (int i = 0; i < n; i++) {
    cin >> f >> s;
    memset(frq1, 0, sizeof frq1);
    memset(frq2, 0, sizeof frq2);
    for (int i = 0; i < f.size(); i++) frq1[f[i] - 'a']++;
    for (int i = 0; i < s.size(); i++) frq2[s[i] - 'a']++;
    for (int j = 0; j < 26; j++) frq[j] += max(frq1[j], frq2[j]);
  }

  for (int i = 0; i < 26; i++) printf("%d\n", frq[i]);
}
