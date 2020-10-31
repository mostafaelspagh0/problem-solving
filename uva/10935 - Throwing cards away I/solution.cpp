#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, currentFront;
  bool flag, flag2;
  queue<int> myQueue;
  while (scanf("%d", &n) && n != 0) {
    for (int i = 1; i <= n; i++) myQueue.push(i);
    flag = 0, flag2 = 0;
    printf("Discarded cards:");
    while (!myQueue.empty()) {
      currentFront = myQueue.front();
      myQueue.pop();
      if (myQueue.empty()) break;
      if (flag)
        myQueue.push(currentFront);
      else {
        printf("%c", " ,"[flag2]);
        flag2 = true;
        printf(" %d", currentFront);
      }
      flag = !flag;
    }
    printf("\nRemaining card: %d\n", currentFront);
  }
  return 0;
}
