//Author:  Pranta
//Date:    2020-Aug-16
//Problem: B_Omkar_and_Infinity_Clock
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long
using namespace std;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n+5];
    for(int i=0;i<n;++i) cin>>arr[i];
    int mx=*max_element(arr,arr+n);
    for(int i=0;i<n;++i){
        arr[i]=mx-arr[i];
    }
    mx=*max_element(arr,arr+n);
    if(k%2==0){
        for(int i=0;i<n;++i){
            arr[i]=mx-arr[i];
        }
    }
    for(int i=0;i<n;++i) cout<<arr[i]<<' ';
    cout<<"\n";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}