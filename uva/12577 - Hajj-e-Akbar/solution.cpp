#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt", "r", stdin);
  char c;
  int caseN = 0;
  while (c = getchar(), (c != '*')) {
    scanf("%*s\n");
    printf("Case %d: Hajj-e-%s\n", ++caseN, (c == 'H' ? "Akbar" : "Asghar"));
  }
}