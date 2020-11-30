#include <bits/stdc++.h>
using namespace std;

int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  char c;
  bool flag = true;
  while (c = getchar(), c != EOF) {
    if (c == '"') {
      if (flag) {
        putchar('`');
        putchar('`');
      } else {
        putchar('\'');
        putchar('\'');
      }
      flag = !flag;
    } else {
      putchar(c);
    }
  }
}