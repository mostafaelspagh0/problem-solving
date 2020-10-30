#include <iostream>
using namespace std;
int main(void) {
  int place, placesPerPerson = 1;
  cin >> place;
  string queueOrder[5] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
  while ((placesPerPerson * 5) < place) {
    place -= (placesPerPerson * 5);
    placesPerPerson *= 2;
  }
  cout << queueOrder[(place - 1) / placesPerPerson] << "\n";
}
