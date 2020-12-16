#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, temp;
  set<int> s;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    s.insert(temp);
  }
  printf("%d", s.size());
}