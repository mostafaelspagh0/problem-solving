#include <bits/stdc++.h>
using namespace std;
vector<int> arr;
bool testX(int a) { return a == arr.front(); }
int normalize(int x) {
  while (x % 2 == 0) x /= 2;
  while (x % 3 == 0) x /= 3;
  return x;
}
int main() {
  int n;
  scanf("%d", &n);
  int temp;
  for (int i = 0; i < n; i++) {
    scanf("%d", &temp);
    arr.push_back(normalize(temp));
  }
  bool flag = all_of(arr.begin(), arr.end(), testX);
  puts((flag ? "Yes" : "No"));
}