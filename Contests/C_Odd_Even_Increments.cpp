//Author:  Pranta
//Date:    2022-Apr-21
//Problem: C_Odd_Even_Increments
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
    vector<int>o,e;
    ll arr[n+5];
    fr(i,0,n) {
        cin>>arr[i];
        if(i%2==0) o.pb(arr[i]);
        else e.pb(arr[i]);
    }
    for(int i=0;i<o.size()-1;++i){
        if(o[i]%2!=o[i+1]%2){
            cout<<"NO"<<endl;
            return;
        } 
    }
    
    for(int i=0;i<e.size()-1;++i){
        if(e[i]%2!=e[i+1]%2){
            cout<<"NO"<<endl;
            return;
        } 
    }
    cout<<"YES"<<endl;
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}