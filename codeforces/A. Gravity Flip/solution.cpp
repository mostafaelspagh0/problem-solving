#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  vector<int> arr;
  int t;
  cin>>n;
  for (int i = 0; i < n; i++) {
    cin >> t;
    arr.push_back(t);
  }
  sort(arr.begin(), arr.end());
  for(int i : arr){
      cout<<i<<" ";
  }
}