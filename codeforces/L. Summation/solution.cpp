#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , temp; 
    scanf("%d",&n);
    long long ans = 0ll;
    for(int i = 0 ; i < n; i++){
        scanf("%d",&temp);
        ans += temp;
    }
    printf("%lld",ans);
}