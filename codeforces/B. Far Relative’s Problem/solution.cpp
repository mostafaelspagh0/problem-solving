#include <iostream>
using namespace std;
int main() {
  int male[367] = {0};
  int female[367] = {0};
  int n, f, s, ans = 0;
  char gen;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> gen >> f >> s;

    if (gen == 'M') {
      if (f == s) {
        male[f] = male[f] + 1;
        continue;
      }
      for (int i = 0; i < 367; i++) {
        if (i >= f && i <= s) male[i] = male[i] + 1;
      }
    } else {
      if (f == s) {
        female[f] = female[f] + 1;
        continue;
      }
      for (int i = 0; i < 367; i++) {
        if (i >= f && i <= s) female[i] = female[i] + 1;
      }
    }
  }
  for (int i = 0; i < 367; i++) {
    f = female[i];
    s = male[i];
    n = (f > s) ? s : f;
    ans = (n > ans) ? n : ans;
  }
  cout << ans * 2;
}