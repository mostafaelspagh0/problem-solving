#include <iostream>
using namespace std;
int main(void) {
  while (true) {
    int i;
    cin >> i;
    if (i == -1) break;
    int candies = 0;
    int arr[i];
    for (int j = 0; j < i; j++) {
      cin >> arr[j];
      candies += arr[j];
    }
    if (candies % i != 0) {
      cout << -1 << "\n";
      continue;
    } else {
      int each = candies / i;
      int ans = 0;
      for (int j = 0; j < i; j++) {
        ans = (arr[j] > each) ? ans + arr[j] - each : ans;
      }
      cout << ans << "\n";
    }
  }
}
