#include <bits/stdc++.h>
using namespace std;
string a;
int main() {
  cin >> a;
  int x = a.back() - '0';
  if (a.size() >= 2) x += (*(a.end() - 2) - '0') * 10;
  if (x % 4 == 0)
    puts("4");
  else
    puts("0");
}