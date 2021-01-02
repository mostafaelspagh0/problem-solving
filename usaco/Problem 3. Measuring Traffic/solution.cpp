#include <bits/stdc++.h>
using namespace std;
int N;
vector<tuple<char, int, int>> arr;
int temp1, temp2;
char temps[20];
int l1 = -1e6, r1 = 1e6, l2 = -1e6, r2 = 1e6;

int main(void) {
  freopen("traffic.in", "r", stdin);
  freopen("traffic.out", "w", stdout);
  scanf("%d", &N);
  for (int i = 0; i < N; i++) {
    scanf("%s %d %d", temps, &temp1, &temp2);
    arr.push_back(make_tuple(temps[1], temp1, temp2));
  }

  for (int i = N - 1, j = 0; i >= 0 && j < N; i--, j++) {
    if (get<0>(arr[i]) == 'o') {
      l1 = max(l1, get<1>(arr[i]));
      r1 = min(r1, get<2>(arr[i]));
    } else if (get<0>(arr[i]) == 'f') {
      l1 += get<1>(arr[i]);
      r1 += get<2>(arr[i]);
    } else {
      l1 -= get<2>(arr[i]);
      r1 -= get<1>(arr[i]);
      l1 = max(0, l1);
    }
  }

  for (int j = 0; j < N; j++) {
    if (get<0>(arr[j]) == 'o') {
      l2 = max(l2, get<1>(arr[j]));
      r2 = min(r2, get<2>(arr[j]));
    } else if (get<0>(arr[j]) == 'n') {
      l2 += get<1>(arr[j]);
      r2 += get<2>(arr[j]);
    } else {
      l2 -= get<2>(arr[j]);
      r2 -= get<1>(arr[j]);
      l2 = max(0, l2);
    }
  }

  printf("%d %d\n%d %d", l1, r1, l2, r2);

  return 0;
}