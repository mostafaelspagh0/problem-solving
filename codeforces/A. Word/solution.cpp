#include <bits/stdc++.h>

using namespace std;

int main() {
  string str;
  cin >> str;
  int upper = 0;
  int lower = 0;

  for (int i = 0; i < str.size(); i++)
    if (isupper(str[i]))
      upper += 1;
    else
      lower += 1;

  if (upper > lower)
    transform(str.begin(), str.end(), str.begin(), ::toupper);
  else
    transform(str.begin(), str.end(), str.begin(), ::tolower);

  cout << str;
  return 0;
}