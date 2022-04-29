#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,m;
    cin>>n>>m;
    int arr[m+5];
    for(int i=0;i<m;++i){
        cin>>arr[i];
    }
    ll x=arr[0]-1;
    for(int i=1;i<m;++i){
        if(arr[i]<arr[i-1]){
            x+=(n-arr[i-1]+arr[i]);
        }
        else{
            x+=arr[i]-arr[i-1];
        }
    }
    cout<<x;
}

