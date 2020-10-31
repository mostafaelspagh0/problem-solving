#include <bits/stdc++.h>
const int MAX = 100005;
using namespace std;
map<int, int> cardWithColor;
map<int, int> faceColor;
set<int> goodColors;
int n, tempFace, tempBack;
int main() {
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d %d", &tempFace, &tempBack);
    faceColor[tempFace]++;
    if (tempFace == tempBack) {
      cardWithColor[tempBack]++;
    } else {
      cardWithColor[tempFace]++;
      cardWithColor[tempBack]++;
    }
  }
  for (auto it = cardWithColor.begin(); it != cardWithColor.end(); it++) {
    if (it->second >= (n / 2) + (n % 2)) {
      goodColors.insert(it->first);
    }
  }
  if (goodColors.size() == 0) {
    puts("-1");
    return 0;
  }
  int ans = MAX;
  for (int i : goodColors) {
    ans = min(ans, ((n / 2) + (n % 2) - faceColor[i]));
  }
  if (ans < 0) ans = 0;
  cout << ans;
  return 0;
}