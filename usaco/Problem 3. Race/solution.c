#include <stdio.h>

int main() {
  freopen("race.in", "r", stdin);
  freopen("race.out", "w", stdout);
  int full_dist, T, max_speed;
  scanf("%d %d", &full_dist, &T);
  while (T--) {
    scanf("%d", &max_speed);
    int curr_speed = 0, curr_dist = 0, time_elapsed = 0;
    while (1) {
      ++curr_speed;
      ++time_elapsed;
      curr_dist += curr_speed;
      if (curr_dist >= full_dist) goto printans;
      if (curr_speed >= max_speed) {
        curr_dist += curr_speed;
        ++time_elapsed;
        if (curr_dist >= full_dist) goto printans;
      }
    }
  printans:
    printf("%d\n", time_elapsed);
  }
}