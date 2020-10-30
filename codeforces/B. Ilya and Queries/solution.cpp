#include <bits/stdc++.h>

using namespace std;

int main() {
  int r, l, n, lengh;
  string str;
  cin >> str >> n;
  lengh = str.size();
  int arr[lengh] = {0};
  for (int i = 1; i < lengh; i++) {
    if (str[i] == str[i - 1]) {
      arr[i] = arr[i - 1] + 1;
    } else {
      arr[i] = arr[i - 1];
    }
  }
  for (int i = 0; i < n; i++) {
    cin >> r >> l;
    cout << arr[l - 1] - arr[r - 1] << "\n";
  }
}
