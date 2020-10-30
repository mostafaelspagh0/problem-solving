#include <iostream>

using namespace std;

int main()
{
    int n , low , high, serja=0,dima=0;
    bool isSerja = true;
    int arr[1003] = {};
    scanf("%d",&n);
    for(int i = 0 ; i < n; i++){
        scanf("%d",arr+i);
    }
    low = 0;
    high = n-1;
    while(n > 0){
        if(arr[high] > arr[low]){
            if(isSerja){
                serja += arr[high];
            }else{
                dima += arr[high];
            }
            high-=1;
        }else{
            if(isSerja){
                serja += arr[low];
            }else{
                dima += arr[low];
            }
            low+=1;
        }
        isSerja = !isSerja;
        n-=1;
    }
    cout<<serja<<" "<<dima;
}
