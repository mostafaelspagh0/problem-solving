#include <iostream>
using namespace std;
int main(void) {
  string word;
  int l = 0;
  getline(cin, word);
  while (l + 2 <= word.size()) {
    if (word.substr(l, 3) == "WUB") {
      word.erase(l, 3);
      word.insert(l, " ");
    } else {
      l += 1;
    }
  }
  if (word[0] == ' ') word.erase(0, 1);
  if (word[word.size() - 1] == ' ') word.erase(word.size() - 1, 1);
  cout << word;
  return 0;
}