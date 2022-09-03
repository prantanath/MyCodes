//Author:  Pranta
//Date:    2022-Sep-02
//Problem: dfs_path
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
#define ll long long
#define pb push_back
const ld PI = 3.141592653589793238462;
const ll MOD = 1000000007;
const ll INF = 1e18;
using namespace std;
void dfs(int a,int v2,vector<int>adj[],vector<int>&par,bool &f)
{
    if(adj[a].empty()) return;
        for(auto x: adj[a]){
            
            // par[x]=a;
            cout<<x<<endl;
            // if(x==v2) {
            //     f=1;
            // }
            // dfs(x,v2,adj,par,f);
            
 
        }
}
vector<int> getPath(int V, int E, vector<int> a, vector<int> b, int v1, int v2) {
    bool f=false;
    //    Write your code here
    vector<int>adj[V+5];
    for(int i=0;i<E;++i){
        adj[a[i]].push_back(b[i]);
        adj[b[i]].push_back(a[i]);
    }
    
    vector<int>ans,par(V+5,-1);
    par[v1]=1;dfs(4,2,adj,par,f);
    // pr(par[v2]);
    if(!f){
        return ans;}
    else {
        ans.clear();
        while(par[v2]!=-1){
            // cout<<v2<<endl;
            ans.push_back(v2);
            v2=par[v2];
        }
        ans.push_back(v1);
        for(auto x:ans) cout<<x<<endl;
    }
    return ans;
}
void solve()
{
    int v,e;
    cin>>v>>e;
    vector<int>a(e),b(e);
    int v1,v2;
    fr(i,0,e){
        cin>>a[i]>>b[i];
    }
    cin>>v1>>v2;
    vector<int>ans = getPath(v,e,a,b,v1,v2);
    // for(auto x:ans) cout<<x<<" ";
}
int main()
{
    fast;
    int t;
    cin>>t;
    while(t--)
    solve();
}