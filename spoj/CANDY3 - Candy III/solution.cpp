#include <iostream>
using namespace std;
int main(void)
{
    int i ;
    cin >> i ;
    for (int j =0 ;j<i;j++){
        long long n=0,y=0,t=0;
        cin>>n;
        for (int k =0;k<n;k++){
            cin>>t;
            y+=t%n;
        }
        if(y%n == 0 ){
            cout<<"YES"<<"\n";
        }else{
            cout<<"NO"<<"\n";
        }
    }

}
