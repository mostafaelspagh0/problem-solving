#include <iostream>
using namespace std;

char board[3][3];

bool win1(char ch) {
  int t = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) t += (board[i][j] == ch);
    if (t == 3) return true;
    t = 0;
  }

  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++) t += (board[i][j] == ch);
    if (t == 3) return true;
    t = 0;
  }

  for (int i = 0; i < 3; i++) t += (board[i][i] == ch);
  if (t == 3) return true;

  t = 0;
  for (int i = 0, j = 2; i < 3; i++, j--) t += (board[i][j] == ch);

  return (t == 3);
}

bool win2(char f, char s) {
  int fc = 0, sc = 0;
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++)
      if (board[i][j] == f)
        fc++;
      else if (board[i][j] == s)
        sc++;
    if ((fc + sc) == 3 && fc != 0 && sc != 0) return true;
    fc = 0, sc = 0;
  }

  for (int j = 0; j < 3; j++) {
    for (int i = 0; i < 3; i++)
      if (board[i][j] == f)
        fc++;
      else if (board[i][j] == s)
        sc++;

    if ((fc + sc) == 3 && (fc != 0 && sc != 0)) return true;
    fc = 0, sc = 0;
  }

  for (int i = 0; i < 3; i++)
    if (board[i][i] == f)
      fc++;
    else if (board[i][i] == s)
      sc++;

  if ((fc + sc) == 3 && (fc != 0 && sc != 0)) return true;
  fc = 0, sc = 0;

  for (int i = 0, j = 2; i < 3; i++, j--)
    if (board[i][j] == f)
      fc++;
    else if (board[i][j] == s)
      sc++;

  return ((fc + sc) == 3 && fc != 0 && sc != 0);
}

int main(void) {
  freopen("tttt.in", "r", stdin);
  freopen("tttt.out", "w", stdout);

  for (int i = 0; i < 3; i++) scanf("%s", board[i]);

  int a = 0, b = 0;
  for (char ch = 'A'; ch <= 'Z'; ch++) a += win1(ch);
  for (char ch1 = 'A'; ch1 <= 'Z'; ch1++)
    for (char ch2 = ch1 + 1; ch2 <= 'Z'; ch2++) b += win2(ch1, ch2);

  printf("%d\n%d", a, b);
  return 0;
}
