//Author:  Pranta
//Date:    2022-May-06
//Problem: D_Vertical_Paths
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
vector<ll>adj[200005];
vector<vector<ll>>ans;
vector<ll> order;

void dfs(ll u){
    // pr(u);
    order.pb(u);
    for(int x: adj[u]){
        dfs(x);
    }
    // vout(order);
    // cout<<endl;
    if(adj[u].empty()){
        ans.push_back(order);
        order.clear();
    }
    
}
void solve()
{
    ll n,root;
    cin>>n;
    fr(i,1,n+1){
        adj[i].clear();
    }
    fr(i,1,n+1) 
    {
        ll x;
        cin>>x;
        //cout<<x<<endl;
        if(x==i){
            root=i;
            continue;
        }
        //3 1 3 3 1
        //1-3,1-2,3-4,1-5
        adj[x].pb(i);
        //adj[i].pb(x);
    }
    dfs(root);
    pr(ans.size());
    fr(i,0,ans.size()){
        pr(ans[i].size());
        for(int j:ans[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    ans.clear();
    cout<<endl;

}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}