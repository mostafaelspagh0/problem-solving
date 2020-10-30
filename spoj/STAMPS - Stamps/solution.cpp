#include <iostream>
using namespace std;

int main() {
  int n, rey, k, lucy = 0, lucyc = 0;
  bool found;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cout << "Scenario #" << i + 1 << ":" << endl;
    found = false;
    lucy = 0;
    lucyc = 0;
    cin >> rey >> k;
    int arr[k];
    for (int c = 0; c < k; c++) {
      cin >> arr[c];
    }

    for (int j = 0; j < k - 1; j++) {
      for (int haha = 0; haha < k - 1 - j; haha++) {
        if (arr[haha] < arr[haha + 1]) {
          swap(arr[haha], arr[haha + 1]);
        }
      }
    }
    for (int jk = 0; jk < k; jk++) {
      lucy += arr[jk];
      lucyc += 1;
      if (lucy >= rey) {
        cout << lucyc << endl;
        found = true;
        break;
      }
    }
    if (!found) {
      cout << "impossible" << endl;
    }
  }
}