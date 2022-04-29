#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],pos;
    for(int i=1;i<=5;++i){
        cin>>arr[i];
        if(arr[i]==0){
            pos=i;
        }
    }
    cout<<pos;
}
