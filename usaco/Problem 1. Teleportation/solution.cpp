#include <bits/stdc++.h>
using namespace std;

int main()
{
  freopen("teleport.in", "r", stdin);
  freopen("teleport.out", "w", stdout);

  int a, b, x, y;
  scanf("%d %d %d %d", &a, &b, &x, &y);

  printf("%d", min({abs(a - b), (abs(a - x) + abs(y - b)),
                    (abs(a - y) + abs(x - b))}));
}