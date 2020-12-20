#include <bits/stdc++.h>
using namespace std;

int rect1[4], rect2[4];

bool overlap(int x, int y) {
  return x >= rect2[0] && x <= rect2[2] && y >= rect2[1] && y <= rect2[3];
}

int main() {
  freopen("billboard.in", "r", stdin);
  freopen("billboard.out", "w", stdout);

  for (int i = 0; i < 4; i++) scanf("%d", rect1 + i);
  for (int i = 0; i < 4; i++) scanf("%d", rect2 + i);

  int coveredCorners =
      overlap(rect1[0], rect1[1]) + overlap(rect1[0], rect1[3]) +
      overlap(rect1[2], rect1[1]) + overlap(rect1[2], rect1[3]);


  if (coveredCorners < 2) {
    printf("%d", (rect1[2] - rect1[0]) * (rect1[3] - rect1[1]));
  } else {
    printf("%d", (rect1[2] - rect1[0]) * (rect1[3] - rect1[1]) -
                     (min(rect1[2], rect2[2]) - max(rect1[0], rect2[0])) *
                         (min(rect1[3], rect2[3]) - max(rect1[1], rect2[1])));
  }
}
