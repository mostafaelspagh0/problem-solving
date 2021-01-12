#include <bits/stdc++.h>
using namespace std;

int ans = 0;

char board[8][8];

bool valid(int row, int col) {
  if (board[row][col] == '*') return false;
  for (int i = 0; i < 8; i++)
    if (board[row][i] == '1') return false;

  for (int i = 0; i < 8; i++)
    if (board[i][col] == '1') return false;

  for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    if (board[i][j] == '1') return false;

  for (int i = row, j = col; i < 8 && j < 8; i++, j++)
    if (board[i][j] == '1') return false;

  for (int i = row, j = col; j >= 0 && i < 8; i++, j--)
    if (board[i][j] == '1') return false;

  for (int i = row, j = col; j < 8 && i >= 0; i--, j++)
    if (board[i][j] == '1') return false;

  return true;
}

void solve(int col) {
  if (col >= 8) {
    ans += 1;
    return;
  };
  for (int i = 0; i < 8; i++) {
    if (valid(i, col)) {
      board[i][col] = '1';
      solve(col + 1);
      board[i][col] = '0';
    }
  }
  return;
}

int main() {
  for (int i = 0; i < 8; i++) scanf("%s", board[i]);
  solve(0);
  printf("%d",ans);
  return 0;
}
