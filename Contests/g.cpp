#include <bits/stdc++.h>
using namespace std;
vector<int> adj[100005];
int dis[100005];
bool vis[100005];
void bfs(int x);
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,e,cnt=0;
    cin>>n>>e;
    for(int i=1;i<=e;++i){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
        for(int i=1;i<=n;++i) {
            dis[i]=-1;
            vis[i]=false;
        }
    for(int i=1;i<=n;++i) {
            if(dis[i]==-1){
                cnt++;
                bfs(i);
            }
        }
    cout<<cnt<<endl;
}
void bfs(int x){
        queue<int>q;
        q.push(x);
        dis[x]=0;
        vis[x]=true;
        while(!q.empty()){
            int y=q.front();
            q.pop();
            for(int i=0;i<adj[y].size();++i){
                int z=adj[y][i];
                if(!vis[z]){
                    q.push(z);
                    vis[z]=true;
                    dis[z]=dis[y]+1;
                }
            }
        }

}
