//https://www.hackerrank.com/challenges/magic-square-forming/problem
#include <bits/stdc++.h>
using namespace std;
int main() {
  int arr[9];
  int order[8] = {0, 1, 2, 5, 8, 7, 6, 3};
  int values[8] = {6, 1, 8, 3, 4, 9, 2, 7};
  for (int i = 0; i < 9; i++) {
    cin >> arr[i];
  }
  int ans = INT_MAX;
  int currentAns = 0;
  for (int i = 0; i < 8; i++) {
    currentAns = abs(5 - arr[4]);
    for (int j = i, k = 0; j < 8 + i; j++, k++) {
      if (values[j % 8] == 9 &&
          (order[k] == 0 || order[k] == 2 || order[k] == 6 || order[k] == 8)) {
        currentAns = INT_MAX;
        break;
      }
      currentAns += abs(arr[order[k]] - values[j % 8]);
    }
    ans = min(currentAns, ans);
  }
  for (int i = 8; i > 0; i--) {
    currentAns = abs(5 - arr[4]);
    for (int j = 8 + i, k = 0; j > i; j--, k++) {
      if (values[j % 8] == 9 &&
          (order[k] == 0 || order[k] == 2 || order[k] == 6 || order[k] == 8)) {
        currentAns = INT_MAX;
        break;
      }
      currentAns += abs(arr[order[k]] - values[j % 8]);
    }

    ans = min(currentAns, ans);
  }
  cout << ans;
}