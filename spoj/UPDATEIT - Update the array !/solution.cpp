#include <bits/stdc++.h>
using namespace std;

int main() {
  int testcases, lengh, nomE, l, r, value, nomQ, q;
  cin >> testcases;
  for (int k = 0; k < testcases; k++) {
    cin >> lengh >> nomE;
    int arr[lengh + 1] = {};
    for (int i = 0; i < nomE; i++) {
      cin >> l >> r >> value;
      arr[l] += value;
      arr[r + 1] -= value;
    }
    for (int i = 1; i < lengh; i++) {
      arr[i] += arr[i - 1];
    }
    cin >> nomQ;
    for (int i = 0; i < nomQ; i++) {
      cin >> q;
      cout << arr[q] << "\n";
    }
  }
}
