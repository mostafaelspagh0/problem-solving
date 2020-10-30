#include <bits/stdc++.h>

using namespace std;

int main()
{
    int ans =0 ;
    string s ;
    cin>>s;
    char first,second;
    first = 'a' ;
    for(int i = 0 ; i < (int)s.size() ; i++){

        second = s[i];
        ans += min(abs(first-second),abs(26-abs(first-second)));
        first = second;
    }
    cout<<ans;

    return 0;
}
