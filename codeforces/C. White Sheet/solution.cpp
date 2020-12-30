#include <bits/stdc++.h>
using namespace std;

double x1, x2, x3, x4, x5, x6, cy1, y2, y3, y4, y5, y6;

bool inSquare1(double x, double y) {
  return x >= x3 && x <= x4 && y >= y3 && y <= y4;
}

bool inSquare2(double x, double y) {
  return x >= x5 && x <= x6 && y >= y5 && y <= y6;
}

int main() {
  scanf("%lf %lf %lf %lf", &x1, &cy1, &x2, &y2);
  scanf("%lf %lf %lf %lf", &x3, &y3, &x4, &y4);
  scanf("%lf %lf %lf %lf", &x5, &y5, &x6, &y6);

  for (double i = x1; i <= x2; i += 0.5) {
    if ((!inSquare1(i, cy1) && !inSquare2(i, cy1)) ||
        (!inSquare1(i, y2) && !inSquare2(i, y2))) {
      puts("YES");
      return 0;
    }
  }

  for (double i = cy1; i <= y2; i += 0.5) {
    if ((!inSquare1(x1, i) && !inSquare2(x1, i)) ||
        (!inSquare1(x2, i) && !inSquare2(x2, i))) {
      puts("YES");
      return 0;
    }
  }

  puts("NO");

  return 0;
}