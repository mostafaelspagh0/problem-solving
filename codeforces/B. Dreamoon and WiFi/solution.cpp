#include <bits/stdc++.h>

using namespace std;

map<int, map<int, double> > repo;
int power2[12];

double signalToValue(string str) {
  return count(str.begin(), str.end(), '+') -
         count(str.begin(), str.end(), '-');
}

string recur(string s) {
  if (s.size() > 10) return "";
  repo[s.size()][signalToValue(s)] += 1;
  return recur(s + "+") + recur(s + "-");
}

void preprocessing() {
  recur("");
  power2[0] = 1;
  for (int i = 1; i < 11; i++) power2[i] = 2 * power2[i - 1];
}

int main() {
  preprocessing();
  string s, t;
  int p, m, q;
  cin >> s >> t;
  p = count(s.begin(), s.end(), '+') - count(t.begin(), t.end(), '+');
  m = count(s.begin(), s.end(), '-') - count(t.begin(), t.end(), '-');
  q = count(t.begin(), t.end(), '?');
  if (p < 0 || m < 0)
    printf("0.000000000000");
  else if (q == 0)
    printf("1.000000000000");
  else {
    printf("%.12f", repo[q][(signalToValue(s) - signalToValue(t))] / power2[q]);
  }
}