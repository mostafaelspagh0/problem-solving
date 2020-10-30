#include <bits/stdc++.h>
using namespace std;
bool isprime(int n) {
  return (n % 2 != 0 && n % 3 != 0 && n % 5 != 0 && n % 7 != 0) ||
         (n == 2 || n == 3 || n == 5 || n == 7);
}
int main() {
  int n;
  cin >> n;
  int x = 4, y = n - 4;
  while (true) {
    if (!isprime(x) && !isprime(y)) break;
    x += 1;
    y -= 1;
  }
  cout << x << " " << y << endl;
}