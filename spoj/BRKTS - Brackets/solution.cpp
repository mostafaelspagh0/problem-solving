#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  int temp = 0;
  string haha;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> haha;
    temp = 0;
    for (int j = 0; j < (int)haha.size(); j++) {
      if (haha[j] == '{') {
        temp += 1;
      } else if (haha[j] == '}') {
        temp -= 1;
      }
      if (temp < 0) {
        break;
      }
    }
    if (temp == 0) {
      cout << ":)" << endl;
    } else {
      cout << ":(" << endl;
    }
  }
}
