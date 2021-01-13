#include <bits/stdc++.h>

using namespace std;

int N;
set<string> arr[100];
char tmp[101];
string s;

int main(void) {
  freopen("guess.in", "r", stdin);
  freopen("guess.out", "w", stdout);
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    int K;
    scanf("%*s %d", &K);
    for (int j = 0; j < K; j++) {
      scanf("%s", tmp);
      s = tmp;
      arr[i].insert(s);
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++)
    for (int j = i + 1; j < N; j++) {
      int t = 0;
      if (arr[i].size() > arr[j].size())
        for (string str : arr[i]) t += arr[j].count(str);
      else
        for (string str : arr[j]) t += arr[i].count(str);
      ans = max(ans, t);
    }

  printf("%d", ans + 1);
}