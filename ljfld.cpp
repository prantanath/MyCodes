//Author:  Pranta
//Date:    2021-Jul-29
//Problem: B_Cobb
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define INF (int)1e9
#define ll long long
#define pb push_back
using namespace std;
void solve()
{
    ll n,k;
    cin>>n>>k;
    ll arr[n+5];
    for(int i=1;i<=n;++i) cin>>arr[i];
    ll ans=0,mx=-INF;
    for(int i=n;i>=max(1ll,n-200);--i){
        for(int j=i-1;j>=max(1ll,n-200);--j){
        ans=i*j-k*(arr[i]|arr[j]);
        //mx=max(ans,mx);
        }

    }
    cout<<mx<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}
