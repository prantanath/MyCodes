//Author:  Pranta
//Date:    2022-May-01
//Problem: Doubled_Distances
#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" " 
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" " 
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=0;--i)
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
    ll n;
    cin>>n;
    vector<int>v(n);
    fr(i,0,n) cin>>v[i];
    SORT(v);
    fr(i,1,n-1){
        ll tmp1= v[i]-v[i-1];
        ll tmp2= v[i+1]-v[i];
        if(2*tmp1!=tmp2 and 2*tmp2!=tmp1){
            pr("No");return;
        }
    }
    pr("Yes");
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}