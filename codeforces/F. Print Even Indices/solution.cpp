#include <bits/stdc++.h>

using namespace std;

int arr[10000];
int main() {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) scanf("%d", arr + i);
  n -= 1 + (n % 2 == 0) ;
  while(n >= 0) printf("%d ",arr[n]),n-=2;
}