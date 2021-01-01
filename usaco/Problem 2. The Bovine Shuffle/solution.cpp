#include <bits/stdc++.h>
using namespace std;
int shuffl[110];
int shuffln[110];
int id[110];
int n;

int main() {
  freopen("shuffle.in", "r", stdin);
  freopen("shuffle.out", "w", stdout);

  scanf("%d", &n);

  for (int i = 0; i < n; i++) scanf("%d", shuffl + i);

  for (int i = 0; i < n; i++) shuffln[i] = shuffl[shuffl[shuffl[i] - 1] - 1];

  for (int i = 0; i < n; i++) scanf("%d", id + i);

  for (int i = 0; i < n; i++) printf("%d\n", id[shuffln[i] - 1]);
}