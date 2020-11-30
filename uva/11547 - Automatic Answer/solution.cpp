#include <bits/stdc++.h>
using namespace std;
int main() {
  //   “Multiply n by 567, then divide the result by 9, then add 7492, then
  //   multiply by 235, then divide
  // by 47, then subtract 498. What is the digit in the tens column?”

  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int T;
  scanf("%d", &T);
  int n;
  while (T--) {
    scanf("%d", &n);
    printf("%d\n",
           (int)abs(((((((n * 63) + 7492) * 235) / 47) - 498) % 100) / 10));
  }
}