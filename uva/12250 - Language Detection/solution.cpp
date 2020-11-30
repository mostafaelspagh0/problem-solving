#include <bits/stdc++.h>
using namespace std;

struct cmp_str {
  bool operator()(char const *a, char const *b) const {
    return std::strcmp(a, b) < 0;
  }
};

map<char *, char *, cmp_str> mapx;
char s[100];

int main() {
  mapx["HELLO"] = "ENGLISH";
  mapx["HOLA"] = "SPANISH";
  mapx["HALLO"] = "GERMAN";
  mapx["BONJOUR"] = "FRENCH";
  mapx["CIAO"] = "ITALIAN";
  mapx["ZDRAVSTVUJTE"] = "RUSSIAN";

  int caseN = 0;

  while (scanf("%s", s), (s[0] != '#')) {
    printf("Case %d: ", ++caseN);
    if (mapx.count(s)) {
      printf("%s\n", mapx[s]);
    } else {
      puts("UNKNOWN");
    }
  }
}