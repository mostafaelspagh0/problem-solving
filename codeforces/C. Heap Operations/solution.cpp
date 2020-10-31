#include <bits/stdc++.h>
using namespace std;
int leng, value, heapCount = 0, ans = 0;
string output, command;
multiset<int> minHeap;
void insertx() {
  output += "insert " + to_string(value) + "\n";
  ans += 1;
  minHeap.insert(value);
  heapCount += 1;
}
void removeMinx() {
  if (heapCount == 0) {
    output += "insert 0\n";
    ans += 1;
    minHeap.insert(0);
    heapCount += 1;
  }
  output += "removeMin\n";
  ans += 1;
  minHeap.erase(minHeap.begin());
  heapCount -= 1;
}
void getMinx() {
  while (*minHeap.begin() < value && heapCount > 0) removeMinx();
  if (heapCount == 0 || *minHeap.begin() > value) insertx();
  output += "getMin " + to_string(value) + "\n";
  ans += 1;
}
int main() {
  cin >> leng;
  while (leng--) {
    cin >> command;
    if (command == "removeMin")
      removeMinx();
    else {
      cin >> value;
      if (command == "insert")
        insertx();
      else
        getMinx();
    }
  }
  cout << ans << "\n" << output;
}