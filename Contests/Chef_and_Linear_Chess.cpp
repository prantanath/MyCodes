//Author:  Pranta
//Date:    2020-Aug-09
//Problem: Chef_and_Linear_Chess
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
    ll mn=INT_MAX,initial=-1;
    for(int i=0;i<n;++i){
        if(k%arr[i]==0){
            if(k/arr[i]<mn){
                mn=k/arr[i];
                initial=arr[i];
            }
        }
    }
    cout<<initial<<"\n";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}