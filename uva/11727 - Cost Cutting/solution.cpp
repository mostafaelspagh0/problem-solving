#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt", "r", stdin);
  //   freopen("output.txt", "w", stdout);

  int T;
  scanf("%d", &T);
  int caseN = 0;
  int arr[3];
  int i;
  while (T--) {
    for (i = 0; i < 3; i++) {
      scanf("%d", &arr[i]);
    }
    sort(arr, arr + 3);
    printf("Case %d: %d\n", ++caseN, arr[1]);
  }
}