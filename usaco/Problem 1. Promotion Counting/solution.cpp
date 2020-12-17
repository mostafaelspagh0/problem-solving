#include <bits/stdc++.h>
using namespace std;

int leaderBoard[10][3];
int main() {
  freopen("promote.in", "r", stdin);
  freopen("promote.out", "w", stdout);

  for (int i = 0; i < 4; i++)
    scanf("%d %d", &leaderBoard[i][0], &leaderBoard[i][1]);

  for (int i = 3; i > 0; i--) {
    leaderBoard[i][2] = leaderBoard[i][1] - leaderBoard[i][0];
    leaderBoard[i - 1][0] -= leaderBoard[i][2];
  }

  for (int i = 1; i <= 3; i++) printf("%d\n", leaderBoard[i][2]);
}