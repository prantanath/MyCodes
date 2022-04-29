#include<bits/stdc++.h>
using namespace std;
int n,e;
vector<int> adj[105];
queue<int>q;
stack<int>s;
int dis[105],par[105];
void bfs(int src);
int main()
{
    cin>>n>>e;
    for(int i=0;i<e;++i) {
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=0;i<=n;++i) {
            dis[i]=-1;
            par[i]=0;
    }
    bfs(1);
    int des;
    cin>>des;
    s.push(des);
    while(des!=1){
        s.push(par[des]);
        des=par[des];
    }
    while(!s.empty()){
        cout<<s.top()<<"->";
        s.pop();
    }
}
void bfs(int src)
{
    dis[src]=0;
    q.push(src);
    while(!q.empty()){
        int u=q.front();
        q.pop();
        for(int i=0;i<adj[u].size();++i){
            int x=adj[u][i];
            if(dis[x]==-1){
                par[x]=u;
                dis[x]=1+dis[u];
                q.push(x);
            }
        }
    }
}
