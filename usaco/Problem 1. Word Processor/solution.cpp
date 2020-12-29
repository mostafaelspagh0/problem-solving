#include <bits/stdc++.h>
using namespace std;
int main() {
  freopen("word.in", "r", stdin);
  freopen("word.out", "w", stdout);

  int n, m;
  scanf("%d %d", &n, &m);
  string output = "", temp;
  int curr_len = 0;
  for (int i = 0; i < n; i++) {
    cin >> temp;
    if (curr_len + temp.size() <= m) {
      if (output != "") {
        output += " ";
        output += temp;
        curr_len += temp.size();

      } else {
        output = temp;
        curr_len = temp.size();
      }
    } else {
      printf("%s\n", output.c_str());
      output = temp;
      curr_len = temp.size();
    }
  }
  printf("%s", output.c_str());
}