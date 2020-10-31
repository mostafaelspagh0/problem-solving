#include <bits/stdc++.h>
using namespace std;
stack<int> st;
main() {
  string s;
  cin >> s;
  st.push(0);
  int maxx = 0, rep = 1, si = 0, len = s.size();
  for (int i = 1; i <= len; i++) {
    if (s[i - 1] == '(') {
      st.push(i);
      si++;
    } else {
      if (si > 0) {
        si--;
        st.pop();
        if (i - st.top() == maxx) {
          rep += 1;
        } else if (i - st.top() > maxx) {
          maxx = i - st.top();
          rep = 1;
        }
      } else
        st.push(i);
    }
  }
  printf("%d %d", maxx, rep);
  return 0;
}
