#include <bits/stdc++.h>
using namespace std;

char s[20];
char cmp[20] = "onetwo";
int main() {
  // freopen("input.txt", "r", stdin);
  int T, len, one, two, i;
  scanf("%d", &T);
  while (T--) {
    scanf("%s", s);
    len = strlen(s);
    if (len == 5) {
      puts("3");
    } else {
      one = two = 0;
      for (i = 0; i < 3; i++) {
        one += s[i] == cmp[i];
        two += s[i] == cmp[i + 3];
      }
      puts((one > two ? "1" : "2"));
    }
  }
}