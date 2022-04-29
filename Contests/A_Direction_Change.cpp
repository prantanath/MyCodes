//Author:  Pranta
//Date:    2022-Apr-19
//Problem: A_Direction_Change
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
    ll n,m;
    cin>>n>>m;
    if(n-1==0 && m-1>1||m-1==0 && n-1>1) {
        cout<<-1<<endl;
        return;
    }
    if(n>m) swap(n,m);
    if(n+1>=m){
        pr(n+m-2);
    }
    else{
        ll ans= n+m-2;
        ll res = m-1-n;
        if(res%2==0){
            ans+=res;
        }
        else ans+=res+1;

        pr(ans);

    }
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}