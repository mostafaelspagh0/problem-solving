#include <bits/stdc++.h>
using namespace std;
int n, score, i = 0, alice = 0, barbara = 0;
char player;
bool flag = false;
char match[300];

void add() {
  player = match[i];
  score = match[i + 1] - '0';
  if (player == 'A')
    alice += score;
  else
    barbara += score;
}

int main() {
  // freopen("input.txt", "r", stdin);
  // // A2B2A1B2A2B1A2B2A1B2A1A1B1A1A2

  scanf("%s", match);
  n = strlen(match);
  i = 0;

  while (alice < 11 && barbara < 11 && !flag) {
    add();
    i += 2;
    flag = alice == barbara && alice == 10;
  }

  while (abs(alice - barbara) < 2 && flag) {
    add();
    i += 2;
  }

  puts((alice > barbara ? "A" : "B"));

  return 0;
}