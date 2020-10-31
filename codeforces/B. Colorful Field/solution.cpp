#include <bits/stdc++.h>
using namespace std;
int n, m, k, t;
int gap[1000];
int kstill = 0;
int t1, t2, t3;
string crops[3] = {"Grapes", "Carrots", "Kiwis"};
int idl(int t1h, int t2h) {
  int ret;
  ret = ((t1h - 1) * m) + t2h;
  return ret;
}
int waste(int id) {
  int ans = 0;
  for (int i = 0; i < k; i++) {
    if (gap[i] < id) {
      ans = i + 1;
    } else if (gap[i] == id) {
      return -1;
    } else {
      return ans;
    }
  }
  return ans;
}
int main() {
  cin >> n >> m >> k >> t;
  for (int i = 0; i < k; i++) {
    cin >> t1 >> t2;
    gap[kstill] = idl(t1, t2);
    kstill += 1;
  }
  sort(gap, gap + k);
  for (int i = 0; i < t; i++) {
    cin >> t1 >> t2;
    int id = idl(t1, t2);
    int w = waste(id);
    if (w == -1) {
      cout << "Waste\n";
    } else {
      id -= w;
      cout << crops[id % 3] << "\n";
    }
  }
}