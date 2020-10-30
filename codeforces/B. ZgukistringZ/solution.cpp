#include <bits/stdc++.h>
using namespace std;

int aCount[26] = {};
int bCount[26] = {};
int cCount[26] = {};
int maxb = INT_MAX, maxc = INT_MAX;
string a, b, c;

void countChar() {
  int aSize = a.size(), bSize = b.size(), cSize = c.size();
  for (int i = 0; i < aSize; i++) {
    aCount[a[i] - 'a'] += 1;
  }
  for (int i = 0; i < bSize; i++) {
    bCount[b[i] - 'a'] += 1;
  }
  for (int i = 0; i < cSize; i++) {
    cCount[c[i] - 'a'] += 1;
  }
}
void printrest() {
  for (int i = 0; i < 26; i++) {
    for (int j = 0; j < aCount[i]; j++) {
      cout << (char)(i + 'a');
    }
  }
}
void updatemaxb() {
  maxb = INT_MAX;
  for (int i = 0; i < 26; i++) {
    if (bCount[i] > 0) {
      maxb = min(maxb, aCount[i] / bCount[i]);
    }
  }
}
void updatemaxc() {
  maxc = INT_MAX;
  for (int i = 0; i < 26; i++) {
    if (cCount[i] > 0) {
      maxc = min(maxc, aCount[i] / cCount[i]);
    }
  }
}
void removebfroma() {
  for (int i = 0; i < 26; i++) {
    aCount[i] -= bCount[i];
  }
}
void removecfroma() {
  for (int i = 0; i < 26; i++) {
    aCount[i] -= cCount[i];
  }
}

int main() {
  cin >> a >> b >> c;
  countChar();
  updatemaxb();
  updatemaxc();
  while (maxb != 0 || maxc != 0) {
    if (maxb > maxc) {
      cout << b;
      removebfroma();
    } else {
      cout << c;
      removecfroma();
    }
    updatemaxb();
    updatemaxc();
  }
  printrest();
  return 0;
}