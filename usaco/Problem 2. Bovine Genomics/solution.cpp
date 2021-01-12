#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;

int n, m;
char spotty[100][150], plain[100][150];

bool valid1(int j) {
  bool a[255] = {}, b[255] = {};
  for (int i = 0; i < n; i++) a[spotty[i][j]] = true;
  for (int i = 0; i < n; i++) b[plain[i][j]] = true;
  return !(a['A'] && b['A'] || a['G'] && b['G'] || a['C'] && b['C'] ||
           a['T'] && b['T']);
}

int main(void) {
  freopen("cownomics.in", "r", stdin);
  freopen("cownomics.out", "w", stdout);
  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) scanf("%s", spotty[i]);
  for (int i = 0; i < n; i++) scanf("%s", plain[i]);
  int answer = 0;
  for (int j = 0; j < m; j++)
    if (valid1(j)) answer++;
  cout << answer << "\n";
  return 0;
}