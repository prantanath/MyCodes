#include<bits/stdc++.h>
#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define vout(v) for(int i=0;i<(v).size();i++)cout<<v[i]<<" "
#define arout(v,n) for(int i=0;i<n;i++)cout<<v[i]<<" "
#define inp(a,n) ({ fr(i,0,n)cin>>a[i]; })
#define fr(i,a,n) for(int i=a;i<n;++i)
#define rfr(i,a,n) for(int i=n-1;i>=a;--i)
#define mem(a, b) memset(a, (b), sizeof(a))
#define SORT(a) sort(a.begin(),a.end())
#define all(a) (a).begin(),(a).end()
#define pr(a) cout<<a<<"\n"
#define sz(a) a.size();
#define ld long double
#define pb push_back
 
using namespace std;
bool vis[100005];
vector<int>adj[100005];
int color[100005];
map<int,int>mp;
 
void dfs(int a)
{
        if(adj[a].empty()) return;
        for(auto x: adj[a]){
            if(!vis[x]){
            color[x]=mp[color[a]];
            vis[x]=true;
            dfs(x);
            }
 
        }
 
 
}
void solve()
{
    //cin>>n;
    long long n;
    cin>>n;
    fr(i,0,n-1){
        int x,y;
        cin>>x>>y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    mp[1]=0;
    mp[0]=1;
    vis[1]=true;
    color[1]=1;
    dfs(1);
    fr(i,1,n+1) cout<<color[i]<<" ";
 
}
int main()
{
    fast;
    int t=1;
    //cin>>t;
    while(t--)
    solve();
}