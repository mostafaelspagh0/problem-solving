#include <iostream>
#include <map>
using namespace std;
int main() {
  int n;
  string gnome;
  cin >> n >> gnome;
  if (n % 4 != 0) {
    cout << "===";
    return 0;
  }
  int each = n / 4, a = 0, g = 0, c = 0, t = 0, q = 0;
  int qs[n];
  for (int i = 0; i < n; i++) {
    if (gnome[i] == 'A') {
      a += 1;
    } else if (gnome[i] == 'G') {
      g += 1;
    } else if (gnome[i] == 'C') {
      c += 1;
    } else if (gnome[i] == 'T') {
      t += 1;
    } else if (gnome[i] == '?') {
      qs[q] = i;
      q += 1;
    }
  }
  if (q == 0 && a == each && g == each && c == each && t == each) {
    cout << gnome;
    return 0;
  }
  if (a > each || g > each || c > each || t > each) {
    cout << "===";
    return 0;
  }
  a = each - a;
  g = each - g;
  c = each - c;
  t = each - t;
  string h;
  for (int kl = 0; kl < q; kl++) {
    gnome.erase(qs[kl], 1);
    if (a > 0) {
      h = "A";
      a -= 1;
    } else if (g > 0) {
      h = "G";
      g -= 1;
    } else if (c > 0) {
      h = "C";
      c -= 1;
    } else if (t > 0) {
      h = "T";
      t -= 1;
    } else {
      cout << gnome;
      return 0;
    }
    gnome.insert(qs[kl], h);
  }
  cout << gnome;
  return 0;
}
