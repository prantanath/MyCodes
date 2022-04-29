//Author:  Pranta
//Date:    2022-Apr-19
//Problem: B_Social_Distance
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
    ll n,m,s=0;
    cin>>n>>m;
    vector<int>v(n+1);
    fr(i,0,n) cin>>v[i];
    if(n>m){
        cout<<"NO"<<endl;
        return;
    }
    SORT(v);
    reverse(all(v));
    v[0]*=2;
    fr(i,0,n-1){
        s+=v[i];
        s++;
    }
    s++;
    if(s>m) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
    //cout<<s<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}