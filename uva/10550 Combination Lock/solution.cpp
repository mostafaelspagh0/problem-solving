#include <stdio.h>
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);
  int a, b, c, d;
  while (scanf("%d %d %d %d", &a, &b, &c, &d), (a || b || c || d)) {
    printf(
        "%d\n",
        1080 + ((a - b + 40) % 40 + (c - b + 40) % 40 + (c - d + 40) % 40) * 9);
  }
}