#include <bits/stdc++.h>
typedef long long ll;
using namespace std;

const ll MOD = 1e9 + 7;

ll fastpower ( ll a , ll b){
    ll ans = 1 ;
    a %= MOD;
    while( b > 0){
        if(b&1) ans = (ans*a) % MOD;
        b>>=1;
        a = (a*a)%MOD;
    }
    return ans%MOD;
}

int main() {
    map<ll,tuple<int,int,int>> primes ;
    ll t ;
    int n , ans = 1 , current;
    cin>>n;
    for(int i = 0 ; i<n ; i++) {
        scanf("%lld",&t);
        if(primes.count(t) == 0){
            primes[t] = make_tuple(1,1,1);
        }else{
            primes[t] = make_tuple(get<0>(primes[t]) + 1 , 1, 1);
        }
    }
    current = 1;
    for(auto i = primes.begin() ; i != primes.end(); i++){
        t = get<0>(i->second) + 1;
        primes[i->first] = make_tuple(get<0>(i->second),current%(MOD-1),1);
        current = (current*t)%(MOD-1);
    }
    current = 1;
    for(auto i = primes.rbegin() ; i != primes.rend(); i++){
        t = get<0>(i->second) + 1;
        primes[i->first] = make_tuple(get<0>(i->second),get<1>(i->second),current%(MOD-1));
        current = (current*t)%(MOD-1);
    }
    for(auto i = primes.begin() ; i != primes.end() ; i++){
        t = ((ll)(get<0>(i->second) * (ll)(get<0>(i->second) + 1))/2)%(MOD-1);
        t = (t*(ll)get<1>(i->second))%(MOD-1);
        t = (t*(ll)get<2>(i->second))%(MOD-1);
        ans = (ans * fastpower(i->first,t))%MOD;
    }
    printf("%d",ans);
    return 0;
}