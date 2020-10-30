#include <iostream>

using namespace std;

int main() {
  unsigned int n, eraso, counter = 1;
  string haha;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> eraso;
    getline(cin, haha);
    haha.erase(haha.begin() + eraso);
    cout << counter << " " << haha << endl;
    counter += 1;
  }
}