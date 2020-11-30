#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int T, i;
  int divX, divY, x, y;
  bool nlFlag = false;
  while (scanf("%d", &T) && T) {
    scanf("%d %d", &divX, &divY);
    while (T--) {
     
      scanf("%d %d", &x, &y);
      if (x == divX || y == divY)
        puts("divisa");
      else {
        if (y > divY)
          printf("N");
        else
          printf("S");
        if (x > divX)
          puts("E");
        else
          puts("O");
      }
    }
  }
}