#include <iostream>
using namespace std;
string rev(string str) {
  string haha = str;
  int n = str.length();
  for (int i = 0; i < n / 2; i++) {
    swap(haha[i], haha[n - i - 1]);
  }
  return haha;
}
int main() {
  string a, b;
  getline(cin, a);
  getline(cin, b);
  if (b == rev(a)) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}