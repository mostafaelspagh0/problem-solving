#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, t, tallest = -1, shortest = INT_MAX, shortestIndex = 0,
            tallestIndex = 0, swaps = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> t;

    if (t > tallest) {
      tallest = t;
      tallestIndex = i;
    }
    if (t <= shortest) {
      shortest = t;
      shortestIndex = i;
    }
  }
  if (shortestIndex < tallestIndex) {
    swaps += tallestIndex - 1;
    shortestIndex -= 1;
    swaps += n - shortestIndex - 2;

  } else {
    swaps += tallestIndex - 1;
    shortestIndex -= 1;
    swaps += n - shortestIndex - 1;
  }
  cout << swaps;
}