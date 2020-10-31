#include <bits/stdc++.h>
using namespace std;
int main() {
  int t, caseN = 1, sLen;
  bool flag;
  string s;
  scanf("%d", &t);
  while (t--) {
    cin >> s;
    sLen = s.length();
    flag = true;
    stack<int> charStack;
    for (int i = 0; flag && i < sLen; i++)
      if (s[i] == '0') {
        if (charStack.empty())
          flag = false;
        else {
          charStack.push(charStack.top() + 1);
          if (charStack.top() == 3)
            for (int j = 0; j < 3; j++) charStack.pop();
        }
      } else
        charStack.push(1);
    printf("Case %d: %s\n", caseN++,
           (flag && charStack.empty() ? "yes" : "no"));
  }
  return 0;
}