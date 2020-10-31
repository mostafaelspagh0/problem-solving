#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
  if (n == 2) return true;
  if (n % 2 == 0 || n == 1) return false;
  for (int i = 3; i * i <= n; i += 2) {
    if (n % i == 0) return false;
  }
  return true;
}
int main() {
  int t, low, high;
  scanf("%d", &t);
  while (t--) {
    scanf("%d %d", &low, &high);

    for (int i = low; i <= high; i++) {
      if (isPrime(i)) {
        printf("%d\n", i);
      }
    }
    printf("\n");
  }
}
