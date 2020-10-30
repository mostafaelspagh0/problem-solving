#include <iostream>

using namespace std;
void watch(int& currentMinute, int& watched) {
  currentMinute += 1;
  watched += 1;
}
void skip(int& currentMinute, int& skipValue) { currentMinute += skipValue; }
int main() {
  int numberOfScenes, skipValue, watched = 0, start, last, currentMinute = 1;
  cin >> numberOfScenes >> skipValue;
  for (int i = 0; i < numberOfScenes; i++) {
    cin >> start >> last;
    while (currentMinute != last + 1) {
      if (currentMinute == start && currentMinute <= last) {
        watch(currentMinute, watched);
      } else if (currentMinute + skipValue <= start) {
        skip(currentMinute, skipValue);
      } else {
        watch(currentMinute, watched);
      }
    }
  }
  cout << watched;
}