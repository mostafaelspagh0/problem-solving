#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n, sport = 0, prog=0,math=0, t;
    cin>>n;
    int maths[n] = {}, progs[n]= {},sports[n]= {};
    for(int i = 0 ; i < n ; i++)
    {
        cin>>t;
        switch(t)
        {
        case 1:
            progs[prog] = i+1;
            prog+=1;
            break;
        case 2:
            maths[math] = i+1;
            math+=1;
            break;
        case 3:
            sports[sport] = i+1;
            sport+=1;
            break;
        }
    }
    t = sport;
    t = (t<math)?t:math;
    t = (t<prog)?t:prog;
    cout<<t<<"\n";
    for(int i = 0; i<t; i++)
    {
        cout<<progs[i]<<" "<<maths[i]<<" "<<sports[i]<<"\n";
    }
}
