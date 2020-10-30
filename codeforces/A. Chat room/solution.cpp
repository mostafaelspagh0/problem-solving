#include <iostream>
using namespace std;
int main(void) {
  string hello = "hello", str;
  int l = 0;
  getline(cin, str);
  int lengh = str.size();
  for (int i = 0; i < lengh; i++) {
    if (hello[l] == str[i]) {
      l += 1;
      if (l == 5) {
        cout << "YES";
        return 0;
      }
    }
  }
  cout << "NO";
  return 0;
}