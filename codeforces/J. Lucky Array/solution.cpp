#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, temp;
  map<int, int> frq;
  scanf("%d", &n);
  while (n-- && scanf("%d", &temp)) frq[temp] += 1;
  puts(((*frq.begin()).second % 2 == 1 ? "Lucky" : "Unlucky"));
}