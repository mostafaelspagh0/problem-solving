#include <iostream>
using namespace std;
int main(void)
{
    int number,ans;
    while(cin>>number&&number!=0){
        ans = 0;
        for(number;number>0;number--){
            ans += number*number;
        }
        cout<<ans<<"\n";
    }
}
