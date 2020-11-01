#include<bits/stdc++.h>

using namespace std ;

int main(){
    int n;
    string last ;
    cin>>n;
    cin>>last;
    int ans = 1;
    string temp;
    for(int i =1 ; i < n ; i++){
        cin>>temp;
        if(last != temp){
            ans += 1;
            last = temp;
        }
    }
    cout<<ans;
}