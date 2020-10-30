#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    char t , last = '_';
    int num , ans = 0 ;
     cin>>num;
    while(num--){
        if(last == '_'){
            cin>>last;
            continue;
        }else{
            cin>>t;
            if(t == last){
                ans += 1;
            }
            last = t;
        }
    }
    cout<<ans;
    return 0;
}