#include <bits/stdc++.h>
using namespace std;
string names[] = {
    "Beatrice", "Belinda", "Bella",     "Bessie",
    "Betsy",    "Blue",    "Buttercup", "Sue",
};
vector<pair<string, string>> arr;

char temp1[20], temp2[20];
int n;

bool valid() {
  for (pair<string, string> p : arr) {
    for (int i = 0; i < 8; i++) {
      if (names[i] == p.first) {
        if ((i && names[i - 1] == p.second) ||
            (i < 7 && names[i + 1] == p.second))
          break;
        else
          return false;
      } else if (names[i] == p.second) {
        if ((i && names[i - 1] == p.first) ||
            (i < 7 && names[i + 1] == p.first))
          break;
        else
          return false;
      }
    }
  }
  return true;
}

int main() {
  freopen("lineup.in", "r", stdin);
  freopen("lineup.out", "w", stdout);
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s must be milked beside %s", temp1, temp2);
    arr.push_back({(string)temp1, (string)temp2});
    arr.push_back({(string)temp2, (string)temp1});
  }
  while (!valid() && next_permutation(begin(names), end(names))) continue;
  for (string s : names) {
    printf("%s\n", s.c_str());
  }
}
