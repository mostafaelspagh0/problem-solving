#include<bits/stdc++.h>
using namespace std ;
int main(){
    int n ;
    string s;
    cin>>n;
    cin>>s;
    int a = 0 ; 
    int d = 0;
    for(char i : s){
        if(i == 'A'){
            a+=1;
        }else if (i =='D'){
            d+=1;
        }
    }
    if(a > d){
        cout<<"Anton";
    }else if(d > a){
        cout<<"Danik";
    }else{
        cout<<"Friendship";
    }
}