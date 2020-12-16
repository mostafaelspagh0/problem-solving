#include <bits/stdc++.h>
using namespace std;

int mat[600][600];

int main() {
  int n, x, y, temp;
  scanf("%d %d %d", &n, &x, &y);
  x--;
  y--;

  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++) scanf("%d", &mat[i][j]);

  for (int i = 0; i < n; i++) swap(mat[x][i], mat[y][i]);

  for (int i = 0; i < n; i++) swap(mat[i][x], mat[i][y]);

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) printf("%d ", mat[i][j]);
    printf("\n");
  }
  
}