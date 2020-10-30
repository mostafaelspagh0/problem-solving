#include <iostream>
using namespace std;
int main() {
  int i;
  cin >> i;
  int pt = i;
  int p = 0;
  int ans = 0;
  for (int j = 0; j < i; j++) {
    p += 1;
    ans += 1 + ((pt - 1) * p);
    pt -= 1;
  }
  cout << ans;
}