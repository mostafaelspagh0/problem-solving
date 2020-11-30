#include <bits/stdc++.h>
using namespace std;
int main() {
  int T;
  scanf("%d", &T);
  while (T--) {
    int n, m;
    scanf("%d %d", &n,&m);
    printf("%d", (int) (ceil((double) ((n-2) / 3)) * ceil((double) ((m-2) / 3))));
  }
}