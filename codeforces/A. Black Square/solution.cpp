#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr[5];
  string s;
  for (int i = 1; i < 5; i++) cin >> arr[i];
  cin >> s;
  int ans = 0;
  for (char c : s) ans += arr[(int)c - '0'];
  cout << ans;
}