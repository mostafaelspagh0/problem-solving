#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, w, h, r;
  cin >> n >> r;
  w = 0;
  h = 0;
  do {
    w += n;
    h += n;
    n = 0;
    n = w / r;
    w = w % r;
  } while (n != 0);
  cout << h;
}