#include <bits/stdc++.h>
using namespace std;
int leng, place, temp, minutes;
pair<int, int> temp2;
queue<pair<int, int>> printingQueue;
int proierties[10];
int cases;
bool biggest(int value) {
  for (int i = value + 1; i < 10; i++) {
    if (proierties[i] > 0) {
      return false;
    }
  }
  return true;
}
int main() {
  cin >> cases;
  while (cases--) {
    cin >> leng >> place;
    memset(proierties, 0, sizeof(proierties));
    for (int i = 0; i < leng; i++) {
      cin >> temp;
      proierties[temp] += 1;
      printingQueue.push(make_pair(temp, i));
    }
    minutes = 0;

    while (true) {
      temp2 = printingQueue.front();
      printingQueue.pop();
      if (biggest(temp2.first)) {
        minutes += 1;
        proierties[temp2.first] -= 1;
        if (temp2.second == place) {
          cout << minutes << "\n";
          break;
        }
      } else {
        printingQueue.push(temp2);
      }
    }
    while (!printingQueue.empty()) printingQueue.pop();
  }
}
