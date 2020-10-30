#include<bits/stdc++.h>
using namespace std;
int main(){
    bool charFound[256] = {};
    int distincetChar = 0 ;
    string userName;
    cin>>userName;
    for(char tempChar : userName){
        if(!charFound[(int)tempChar]){ // char found for first time
                distincetChar += 1;
                charFound[(int)tempChar] = true ;
        }
    }
    puts(((distincetChar % 2 == 0)?"CHAT WITH HER!":"IGNORE HIM!" ));
}
