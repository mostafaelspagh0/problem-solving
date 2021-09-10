#include <bits/stdc++.h>
using namespace std;
short can_flip[300005];

int main() {
  int T;
  scanf("%d", &T);
  string s1, s2;
  while (T--) {
    memset(can_flip, 0, sizeof(can_flip));
    int n;
    scanf("%d", &n);
    cin >> s1 >> s2;
    int ones = 0, zeros = 0;
    for (int i = 0; i < n; i++) {
      if (s1[i] == '1') {
        ones++;
      } else {
        zeros++;
      }
      if (ones == zeros) {
        can_flip[i] = 1;
      }
    }
    bool flip = false;
    bool answer = true;
    for (int i = s1.length() - 1; i >= 0 && answer; i--) {
      if (s1[i] == s2[i] && !flip) {
        continue;
      } else if (s1[i] != s2[i] && flip) {
        continue;
      } else if (s1[i] != s2[i] && !flip && can_flip[i]) {
          flip = true;
      } else if (s1[i] == s2[i] && flip && can_flip[i]) {
          flip = false;
      } else {
          answer = false;
      }
    }
    if (answer) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
}