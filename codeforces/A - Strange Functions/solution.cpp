#include <bits/stdc++.h>
using namespace std;
char s[100];
int main() {
  int T;
  int len;
  scanf("%d", &T);
  while (T--) {
    scanf("%s", s);
    len = strlen(s);
    printf("%d\n", len);
  }
}