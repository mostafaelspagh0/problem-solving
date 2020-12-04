#include <bits/stdc++.h>
using namespace std;
char s[100];
char su[3][10];
int main() {
  int T;
  bool flag;
  int len;
  strcpy(su[0], "1");
  strcpy(su[1], "4");
  strcpy(su[2], "78");
  scanf("%d", &T);

  while (T--) {
    flag = false;
    scanf("%s", s);
    len = strlen(s);
    for (int i = 0; i < 3 && !flag; i++) {
      flag = strcmp(su[i], s) == 0;
    }
    if (flag)
      puts("+");
    else if (strcmp(s + (len - 2), "35") == 0)
      puts("-");
    else if (strncmp(s, "190", 3) == 0)
      puts("?");
    else if (s[0] == '9' && s[len - 1] == '4')
      puts("*");
  }
}