#include <bits/stdc++.h>
using namespace std;
vector<int> a;
int n;
string preprocessing(string s) {
  if (s.size() > 9) return "";
  int value = atoi(s.c_str());
  a.push_back(value);
  return preprocessing(s + "7") + preprocessing(s + "4");
}

int main() {
  preprocessing("");
  sort(a.begin(), a.end());
  cin >> n;
  cout << lower_bound(a.begin(), a.end(), n) - a.begin();
}