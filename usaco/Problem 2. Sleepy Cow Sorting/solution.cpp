#include <bits/stdc++.h>
using namespace std;

int N;
int arr[110];

int main() {
  freopen("sleepy.in", "r", stdin);
  freopen("sleepy.out", "w", stdout);
  scanf("%d", &N);
  for (int i = 0; i < N; i++) scanf("%d", arr + i);
  int ans = N - 1;
  while (arr[ans - 1] < arr[ans]) ans--;
  printf("%d", max(ans, 0));
}