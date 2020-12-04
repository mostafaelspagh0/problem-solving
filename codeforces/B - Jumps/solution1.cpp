#include <bits/stdc++.h>
using namespace std;
int x;

int main() {
  // freopen("input.txt", "r", stdin);
  int T;
  int len;
  scanf("%d", &T);
  while (T--) {
    scanf("%d", &x);
    int jump = 1;
    int place = 0;
    while (place < x) {
      place += jump;
      jump += 1;
    }
    printf("%d\n", jump - (place != x + 1));
  }
}