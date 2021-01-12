#include <bits/stdc++.h>
using namespace std;

vector<string> arr;

int main() {
  string s, r;
  cin >> s;
  r = s;
  sort(begin(s), end(s));
  do {
    arr.push_back(s);
  } while (next_permutation(begin(s), end(s)));

  cout << arr.size() << "\n";
  for (string j : arr) {
    cout << j << "\n";
  }
}