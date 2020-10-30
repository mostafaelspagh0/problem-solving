#include <iostream>
using namespace std;
void triling(unsigned long int n) {
  unsigned long int nateg = 0, haha = 1, lala;
  while (true) {
    haha = haha * 5;
    lala = n / haha;
    if (lala == 0) {
      cout << nateg << endl;
      return;
    } else {
      nateg += lala;
    }
  }
}
int main(void) {
  unsigned long int n, t;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> n;
    triling(n);
  }

  return 0;
}