//Author:  Pranta
//Date:    2022-Apr-23
//Problem: C_Unequal_Array
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=a;--i)
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define all(a) (a).begin(),(a).end()
#define pr(a) cout<<a<<endl 
#define sz(a) a.size();
#define ld long double
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
void solve()
{
    ll n;cin>>n;
    ll arr[n+2],st=0,ls=0,gap=0;
    fr(i,0,n) cin>>arr[i];
    fr(i,0,n-1){
        if(arr[i]==arr[i+1]){
            st=i;
            break;
        }
    }
    rfr(i,1,n){
        if(arr[i]==arr[i-1]){
            ls=i-1;
            break;
        }
    }
    //pr(ls);pr(st);
    gap=ls-st;
    if(gap>1 && ls!=st){
        gap--;
    }
    
    pr(gap);
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}