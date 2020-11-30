#include <bits/stdc++.h>
using namespace std;
int main() {
  // freopen("input.txt", "r", stdin);
  // freopen("output.txt", "w", stdout);

  int T;
  int n, m;

  scanf("%d", &T);
  while (T--) {
    scanf("%d %d", &n, &m);
    if(n>m){
      puts(">");
    }else if(n < m){
      puts("<");
    }else{
      puts("=");
    }
  }
}