#include <bits/stdc++.h>
using namespace std;
int n, k;
int sum = 0;
int arr[10000];
double vali;
double minx = INT_MAX, maxx = -1;
bool valid(double value) {
  double sumhaha = sum;
  for (int i = 0; i < n; i++) {
    sumhaha -= arr[i];
    if (value > arr[i]) {
      sumhaha -= (100 * (value - arr[i])) / (100 - k);
    } else if (value < arr[i]) {
      sumhaha += (arr[i] - value) - ((arr[i] - value) * (k / 100));
    }
  }
  return sumhaha >= 0;
}
int main() {
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    sum += arr[i];
    if (arr[i] < minx) minx = arr[i];
    if (arr[i] > maxx) maxx = arr[i];
  }
  double ans;
  for (int i = 0; i < 500; i++) {
    double mid = (minx + maxx) / 2;
    if (valid(mid)) {
      minx = mid;
      ans = mid;
    } else {
      maxx = mid;
    }
  }
  printf("%.9f\n", ans);
}