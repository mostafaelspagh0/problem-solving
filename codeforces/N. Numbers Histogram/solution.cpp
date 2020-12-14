#include<bits/stdc++.h>

using namespace std;

int main(){
    char c;
    int n , temp;
    c = getchar();
    scanf("%d",&n);
    while(n--){
       scanf("%d",&temp);
       while(temp--) putchar(c);
       putchar('\n'); 
    }
}