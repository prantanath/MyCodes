#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,e;
    cin>>n>>e;
    vector<int> adj[e];
    for(int i=1;i<=e;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
                //adj[v].push_back(u);
    }
        int dis[n];
        bool vis[n];
        for(int i=1;i<=n;++i) {
            dis[i]=-1;
            vis[i]=false;
        }
        queue<int>q;
        q.push(1);
        dis[1]=0;
        vis[1]=true;
        while(!q.empty()){
            int y=q.front();
            q.pop();
            for(int i=0;i<adj[y].size();++i){
                int z=adj[y][i];
                if(!vis[z]){
                    q.push(z);
                    vis[z]=true;
                    dis[z]=dis[1]+1;
                }
            }
        }
        int z= *max_element(dis, dis+n);
    cout<<z<<endl;

}
