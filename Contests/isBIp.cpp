#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define r 1
#define g 2
#define un 0
    vector<ll> adj[1005];
    ll col[1005];
    bool isBipartite(int u);
int main() {
    ll n,e;
    cin>>n>>e;
    ll u,v;
    for(int i=1;i<=e;++i){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

        for(int i=1;i<=n;++i) {
            col[i]=0;
        }
    if(isBipartite(1)) cout<<"YES";
    else cout<<"NO";
}
bool isBipartite(int u){
        queue<int>q;
        q.push(u);
        col[u]=g;
        while(!q.empty()){
            int y=q.front();
            q.pop();
            for(int i=0;i<adj[y].size();++i){
                int z=adj[y][i];
                if(col[z]==un){
                    if(col[y]==r) col[z]=g;
                    else col[z]=r;
                    q.push(z);
                }
                else if(col[z]==col[y]) return false;
            }
        }
    return true;
}
