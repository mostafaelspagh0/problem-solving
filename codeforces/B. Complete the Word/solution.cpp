#include <bits/stdc++.h>
using namespace std;
string s;
int frq[26];
int main() {
  cin >> s;
  if (s.size() < 26) {
    puts("-1");
    return 0;
  }
  for (int i = 0; i + 25 < (int)s.size(); i++) {
    memset(frq, 0, sizeof(frq));
    for (int j = i; j < i + 26; j++) {
      if (s[j] != '?') {
        frq[s[j] - 'A'] += 1;
        if (frq[s[j] - 'A'] > 1) {
          goto outer;
        }
      }
    }
    for (int j = i; j < i + 26; j++) {
      if (s[j] == '?') {
        for (int k = 0; k < 26; k++) {
          if (!frq[k]) {
            s[j] = k + 'A';
            frq[k] = 1;
            break;
          }
        }
      }
    }
    for (int j = 0; j < (int)s.size(); j++) {
      if (s[j] == '?') {
        s[j] = 'A';
      }
    }
    cout << s << endl;
    return 0;
  outer:
    continue;
  }
  puts("-1");
  return 0;
}