#include <bits/stdc++.h>
using namespace std;
int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("floor %d / %d = %.f\nceil %d / %d = %.f\nround %d / %d = %.f", a, b,
         floor((double)a / b), a, b, ceil((double)a / b), a, b, round((double)a / b));
}