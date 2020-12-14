#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, temp;
  scanf("%d", &n);
  while (n--) {
    scanf("%d", &temp);
    if (temp < 0)
      printf("2 ");
    else if (temp > 0)
      printf("1 ");
    else
      printf("0 ");
  }
}